# ClearMenu__4Menu

- Address: `0x0023E538`
- Size: `0x1C` (28 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/menu.cpp`
- Reference source: `KS/SRC/ks/menu.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released clear operation delegates to `Resize(0)`; a barrier preserves the wrapper frame.

## Outcome

The released `Menu::ClearMenu` wrapper matched exactly on the first attempt.
