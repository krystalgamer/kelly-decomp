# Enable__9MenuEntry

- Address: `0x0023EE00`
- Size: `0x4C` (76 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/menu.cpp`
- Reference source: `KS/SRC/ks/menu.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

## Attempt notes

Used the retained immutable `menu.cpp:349-357` body with the shared released
`MenuEntry` declaration.  The retail assertion is disabled in the shipped
configuration, leaving the visible/enabled guard, flag update, and callback.

## Outcome

Matched the released menu-entry enable behavior byte-for-byte.
