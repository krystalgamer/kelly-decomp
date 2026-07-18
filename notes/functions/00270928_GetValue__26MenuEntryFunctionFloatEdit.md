# GetValue__26MenuEntryFunctionFloatEdit

- Address: `0x00270928`
- Size: `0x18` (24 bytes)
- Object: `game/files_kellyslater`
- Debug source: `ks/menu.h`
- Reference source: `KS/SRC/ks/menu.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released accessor returns the pointed float when non-null, otherwise zero.

## Outcome

The released `MenuEntryFunctionFloatEdit::GetValue` branch matched exactly on the first attempt.
