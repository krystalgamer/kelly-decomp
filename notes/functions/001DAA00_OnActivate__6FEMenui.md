# OnActivate__6FEMenui

- Address: `0x001DAA00`
- Size: `0x28` (40 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEMenu.h`
- Reference source: `KS/SRC/ks/FEMenu.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 95.0 | 80.0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

The released overload ignores `submenu`; a minimal old-GCC vtable layout preserves the zero-argument OnActivate adjustment/function slots.

## Outcome

The released `FEMenu::OnActivate(int)` virtual thunk matched exactly.
