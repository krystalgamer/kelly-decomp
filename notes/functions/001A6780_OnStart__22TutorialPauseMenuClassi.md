# OnStart__22TutorialPauseMenuClassi

- Address: `0x001A6780`
- Size: `0x1C` (28 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FrontEndMenus.cpp`
- Reference source: `KS/SRC/ks/FrontEndMenus.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The active released body only invokes the base `FEMenu::OnStart`; a barrier prevents tail-call formation.

## Outcome

The released `TutorialPauseMenuClass::OnStart` forwarding wrapper matched exactly on the first attempt.
