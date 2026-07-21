# _$_9ImageDXTC

- Address: `0x00263B28`
- Size: `0x44` (68 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/dxt1_imagedxt1.cpp`
- Reference source: `KS/SRC/ks/dxt1_imagedxt1.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `imagedxtc_dtor_candidate.cpp` |
| 2 | different | 55.2632 | 47.3684 | `imagedxtc_dtor_candidate.cpp` |
| 3 | compile_failed | 0.0 | 0 | `imagedxtc_dtor_candidate.cpp` |
| 4 | different | 55.2632 | 47.3684 | `candidate.cpp` |
| 5 | different | 94.1176 | 88.2353 | `candidate.cpp` |

### Attempt 1 notes

Started from the exact released destructor and header include. The isolated compiler include root does not expose `dxt1_imagedxt1.h`, so the candidate did not compile.

### Attempt 2 notes

Reconstructed the nonvirtual `ImageDXTC` declaration and exact released `ReleaseAll()` destructor body. EE GCC generated the correct hidden deleting flag, but sibling-tail-called `__builtin_delete`, producing 76 bytes instead of the target's 68-byte normal call and shared epilogue.

### Attempt 3 notes

Tried to spell the scalar-delete path explicitly inside the destructor. The candidate used an invalid return-type specification on the destructor definition and was rejected by the legacy compiler.

### Attempt 4 notes

Restored the released `XSize`, `YSize`, and `AlphaValue` layout and the global scalar `operator delete` declaration from `archalloc.h`. The authentic destructor still compiled to the same 76-byte sibling-call form, confirming that `ImageDXTC` has no base class or vtable adjustment involved.

### Attempt 5 notes

Expressed the recovered GCC deleting-destructor ABI directly: call `ReleaseAll(self)`, test `deleting & 1`, conditionally call scalar `__builtin_delete(self)`, then use the established zero-instruction compiler barrier. This recovered the exact 68-byte size and all semantic operations, but scored 94.1176% because the target schedules the first `ra` restore into the conditional branch delay slot and reloads `ra` after deletion, while the isolated wrapper leaves a nop and uses one common restore.

## Outcome

The released ImageDXTC destructor was recovered as a nonvirtual, base-less class destructor that calls ReleaseAll() and uses GCC 2 deleting flag bit 0 for conditional scalar deletion. Five source-only attempts were exhausted; the best exact-size candidate reached 94.1176% but could not reproduce the target return-address restore scheduling without prohibited instruction-level intervention, so the function is deferred.
