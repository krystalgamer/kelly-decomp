# OnTriangle__15MultiplayerMenui

- Address: `0x00183FE8`
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

The released parent `MakeActive(NULL)` call uses the shared menu hierarchy.

## Outcome

The manual parent/vtable layout and symbol wrapper were removed; the released
handler remains exact.
