# SetValue__26MenuEntryFunctionFloatEditf

- Address: `0x00270918`
- Size: `0xC` (12 bytes)
- Object: `game/files_kellyslater`
- Debug source: `ks/menu.h`
- Reference source: `KS/SRC/ks/menu.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released inline setter loads `tfloat` at offset `0xC` and stores the value through it.

## Outcome

The released `MenuEntryFunctionFloatEdit::SetValue` indirect store matched exactly on the first attempt.
