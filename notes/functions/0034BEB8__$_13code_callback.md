# _$_13code_callback

- Address: `0x0034BEB8`
- Size: `0x30` (48 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/signal.cpp`
- Reference source: `KS/SRC/signal.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released empty derived destructor matched through its generated reset to the `signal_callback` base vtable at offset 0x10 and conditional `__builtin_delete`. The ABI-shaped wrapper avoids emitting unrelated RTTI/vtable data, and the trailing empty barrier preserves the framed call.

`KELLY_DECOMP_COMPILER_BARRIER()` is a matching-only annotation that emits no target instruction. It prevents EE GCC from applying the sibling/tail-call or scheduling transformation described above.

## Outcome

The released code-callback destructor matched exactly through its generated base-vtable restore and conditional delete.
