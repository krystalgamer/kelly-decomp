# OnTriangle__12FreesurfMenui

- Address: `0x00185580`
- Size: `0x34` (52 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/MainFrontEnd.cpp`
- Reference source: `KS/SRC/ks/MainFrontEnd.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released parent `MakeActive(NULL)` call matched exactly with `parent` at offset 0x64 and MakeActive at virtual slot 0x114.

## Outcome

The released freesurf-menu triangle handler matched exactly on the first attempt.
