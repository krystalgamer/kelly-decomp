# SetValue__17MenuEntryEnumEditi

- Address: `0x00240298`
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

Used the retained immutable `menu.cpp:870-876` body with the shared released
integer-, list-, and enum-edit hierarchy.

## Outcome

Matched the guarded enum-to-integer value mapping byte-for-byte.
