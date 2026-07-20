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

The released map forwarding matched exactly with `map` at offset 0x156a0, the frontend vtable at 0x74, and OnLevelLoaded at virtual slot 0x1e4.

## Outcome

The released FE manager level-loaded forwarding matched exactly on the first attempt.
