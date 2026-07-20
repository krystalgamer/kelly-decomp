# OnCross__14EnterCheatMenui

- Address: `0x001DDC80`
- Size: `0x28` (40 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/cheatfrontend.h`
- Reference source: `KS/SRC/ks/CheatFrontEnd.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 95.0 | 80.0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

The released wrapper ignores `command`; a minimal old-GCC vtable layout preserves the zero-argument Select adjustment/function slots.

## Outcome

The released `EnterCheatMenu::OnCross` virtual thunk matched exactly.
