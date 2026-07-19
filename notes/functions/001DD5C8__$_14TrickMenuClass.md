# _$_14TrickMenuClass

- Address: `0x001DD5C8`
- Size: `0x1C` (28 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FrontEndMenus.h`
- Reference source: `KS/SRC/ks/FrontEndMenus.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

A symbol-preserving wrapper reproduces the generated destructor's non-tail call to `FEMenu::~FEMenu`.

## Outcome

`TrickMenuClass`'s generated destructor wrapper matched exactly on the first attempt.
