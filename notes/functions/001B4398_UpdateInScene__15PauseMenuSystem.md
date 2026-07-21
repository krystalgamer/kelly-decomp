# UpdateInScene__15PauseMenuSystem

- Address: `0x001B4398`
- Size: `0x48` (72 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FrontEndMenus.cpp`
- Reference source: `KS/SRC/ks/FrontEndMenus.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Reused the shared released FEMenu and PauseMenuSystem declarations; the released body matched after omitting the disabled assertion, which emits no target code.

## Outcome

The pause menu in-scene update matches exactly with released virtual dispatch.
