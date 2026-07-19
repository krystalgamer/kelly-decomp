# LoadPanel__8FrontEndb

- Address: `0x001DADB8`
- Size: `0x1C` (28 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEMenu.h`
- Reference source: `KS/SRC/ks/FEMenu.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

A minimal layout places `panel` at offset 0x80 and preserves the released inline forwarding call.

## Outcome

The inline `FrontEnd::LoadPanel` wrapper matched exactly on the first attempt.
