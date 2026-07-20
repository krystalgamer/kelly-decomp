# OnActivate__15ReplayMenuClass

- Address: `0x001B05B0`
- Size: `0x28` (40 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FrontEndMenus.cpp`
- Reference source: `KS/SRC/ks/FrontEndMenus.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `replay_onactivate_candidate.cpp` |

### Attempt 1 notes

A minimal old-GCC vtable layout preserves the ReplayStart adjustment/function slots.

## Outcome

The released `ReplayMenuClass::OnActivate` virtual thunk matched exactly.
