# OnRight__15FETextMultiMenui

- Address: `0x001DB5B0`
- Size: `0x28` (40 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEMenu.h`
- Reference source: `KS/SRC/ks/FEMenu.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released wrapper ignores `command`; a minimal old-GCC vtable layout preserves the zero-argument OnRight adjustment/function slots.

## Outcome

The released `FETextMultiMenu::OnRight` virtual thunk matched exactly.
