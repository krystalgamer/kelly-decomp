# OnTriangle__12KeyboardMenui

- Address: `0x001DCE70`
- Size: `0x1C` (28 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/SaveLoadFrontEnd.h`
- Reference source: `KS/SRC/ks/SaveLoadFrontEnd.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released inline handler ignores its command and delegates to `go_to_previous_menu`; a barrier preserves the wrapper.

## Outcome

The inline `KeyboardMenu::OnTriangle` wrapper matched exactly on the first attempt.
