# Disable__14MenuEntryTitle

- Address: `0x002706F0`
- Size: `0x1C` (28 bytes)
- Object: `game/files_kellyslater`
- Debug source: `ks/menu.h`
- Reference source: `KS/SRC/ks/menu.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The title's disable override delegates to the inherited implementation; a barrier preserves the wrapper.

## Outcome

The inline `MenuEntryTitle::Disable` wrapper matched exactly on the first attempt.
