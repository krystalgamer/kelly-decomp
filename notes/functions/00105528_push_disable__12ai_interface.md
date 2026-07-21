# push_disable__12ai_interface

- Address: `0x00105528`
- Size: `0x48` (72 bytes)
- Object: `game/files_ai`
- Debug source: `C:/KS/SRC/ai_interface.cpp`
- Reference source: `KS/SRC/ai_interface.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 25.0 | 16.6667 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Used the exact released body and reconstructed the relevant ai_interface, entity, po, and vector declarations.

### Attempt 2 notes

Corrected the compiler-emitted repeated-bool mangling and added a demonstrated post-call barrier because the released assertion prevents the target from becoming a tail call.

## Outcome

The released AI disable operation matches exactly with the narrowly documented compiler barrier.
