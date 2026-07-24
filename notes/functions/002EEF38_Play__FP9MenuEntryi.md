# Play__FP9MenuEntryi

- Address: `0x002EEF38`
- Size: `0x78` (120 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/menusound.cpp`
- Reference source: `KS/SRC/menuSound.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released sound status, stop/add/play branches matched exactly with the menu entry source and sound fields at offsets 0x3c/0x40.

## Outcome

The released menu sound play callback matched exactly on the first attempt.
