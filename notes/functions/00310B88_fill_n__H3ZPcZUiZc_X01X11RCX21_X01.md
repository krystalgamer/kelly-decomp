# fill_n__H3ZPcZUiZc_X01X11RCX21_X01

- Address: `0x00310B88`
- Size: `0x2C` (44 bytes)
- Object: `game/files_misfits`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_algobase.h`
- Reference source: ``
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 86.3636 | 45.4545 | `candidate.cpp` |
| 2 | different | 86.3636 | 45.4545 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 3 notes

Reviewed scheduling preserves the generated character fill loop after two source-level forms placed the iterator increment before the branch delay slot.

## Outcome

Matched generated character fill loop.
