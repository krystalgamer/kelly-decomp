# AddSubmenu__6FEMenuP6FEMenu

- Address: `0x001575E8`
- Size: `0x14` (20 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEMenu.cpp`
- Reference source: `KS/SRC/ks/FEMenu.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released list insertion links the prior submenu head into `sub->next_sub` at `0x70`, replaces head `0x5C`, and sets `sub->parent` at `0x64`.

## Outcome

The released `FEMenu::AddSubmenu` linked-list insertion matched exactly on the first attempt.
