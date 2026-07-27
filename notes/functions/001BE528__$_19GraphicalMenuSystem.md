# _$_19GraphicalMenuSystem

- Address: `0x001BE528`
- Size: `0x104` (260 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/GraphicalMenuSystem.cpp`
- Reference source: `KS/SRC/ks/GraphicalMenuSystem.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

Attempt 1 used the exact released definition cited by {'path': 'kelly-slaters-pro-surfer/KS/SRC/ks/GraphicalMenuSystem.cpp', 'lines': '510-522', 'description': 'Released destructor body'}; {'path': 'kelly-slaters-pro-surfer/KS/SRC/ks/GraphicalMenuSystem.h', 'lines': '177-233', 'description': 'Released class fields, BeachMenu enum, and destructor declaration'}; {'path': 'kelly-slaters-pro-surfer/KS/SRC/ks/FEMenu.h', 'lines': '161-204,434-451', 'description': 'Released FEMenu and FEMenuSystem declarations used for isolated layouts'}. The sole test returned `compile_failed` with score 0.0000. No variant or later attempt was made.

## Outcome

The exact released graphical-menu-system destructor failed the isolated compile because NULL was undeclared; the sole attempt scored 0%.
