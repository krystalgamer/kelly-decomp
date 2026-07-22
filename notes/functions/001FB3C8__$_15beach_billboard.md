# _$_15beach_billboard

- Address: `0x001FB3C8`
- Size: `0x48` (72 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/floatobj.cpp`
- Reference source: `KS/SRC/ks/floatobj.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 54.1667 | 44.4444 | `candidate.cpp` |
| 2 | different | 50.0 | 44.4444 | `candidate.cpp` |
| 3 | different | 62.5 | 50.0 | `candidate.cpp` |
| 4 | different | 86.1111 | 83.3333 | `candidate.cpp` |
| 5 | different | 86.1111 | 83.3333 | `candidate.cpp` |

### Attempt 1 notes

Attempt 1 used the exact released destructor body with the shared original-style hierarchy; GCC tail-called the base destructor and reordered three prologue instructions.

### Attempt 2 notes

Attempt 2 tested the released hierarchy without #pragma interface to rule out vtable-emission effects; scheduling remained different and the vtable relocation was unresolved.

### Attempt 3 notes

Attempt 3 added a normalized barrier after despawn, but automatic base destruction still tail-called and did not match target scheduling.

### Attempt 4 notes

Attempt 4 used the documented last-resort source-level layout shim; behavior and call ordering matched, but three prologue instructions remained reordered.

### Attempt 5 notes

Attempt 5 used typed shared-layout arguments; the same 86.1111% result remained, so the function is deferred at the cap.

## Outcome

Deferred due generated destructor prologue scheduling; shared declarations were retained and no bytes were forced.
