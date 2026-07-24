# read__13point_triggerR10chunk_file

- Address: `0x0028DDF8`
- Size: `0x5C` (92 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/trigger.cpp`
- Reference source: `KS/SRC/trigger.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 76.087 | 69.5652 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

Read the released point/radius serialization and trigger layout; the binary version contains four float reads. A final-call continuation barrier matched on attempt 2.

## Outcome

Matched point trigger serialization
