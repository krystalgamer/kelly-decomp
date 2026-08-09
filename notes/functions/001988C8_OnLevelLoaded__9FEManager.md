# OnLevelLoaded__9FEManager

- Address: `0x001988C8`
- Size: `0x34` (52 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FrontEndManager.cpp`
- Reference source: `KS/SRC/ks/FrontEndManager.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released map forwarding uses the shared FE manager and beach frontend
declarations.

## Outcome

The manual manager/vtable layout and symbol wrapper were removed; the released
forwarding remains exact.
