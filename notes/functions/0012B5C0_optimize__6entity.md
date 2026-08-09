# optimize__6entity

- Address: `0x0012B5C0`
- Size: `0x34` (52 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.cpp`
- Reference source: `KS/SRC/entity.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 25.0 | 15.3846 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Used the released visual-representation null/type checks and pmesh shrink call. EE GCC converted the final call into a sibling tail jump, eliminating the target stack frame and producing 40 bytes.

### Attempt 2 notes

The released pmesh-only optimization uses the shared entity and pmesh
declarations. A local shrink-function pointer preserves the normal call.

## Outcome

The compiler barrier was removed; the released method remains exact.
