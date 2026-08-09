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

The released bounds checks, null guard, and inline state load use the shared
`Menu` and `MenuEntry` declarations.

## Outcome

The local menu and entry layouts were removed.
