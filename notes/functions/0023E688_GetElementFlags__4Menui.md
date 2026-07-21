# GetElementFlags__4Menui

- Address: `0x0023E688`
- Size: `0x3C` (60 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/menu.cpp`
- Reference source: `KS/SRC/ks/menu.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released bounds checks, entry-null check, and inline GetState load match exactly with the original Menu and MenuEntry layouts.

## Outcome

The released menu element bounds/null checks and inline state load match exactly.
