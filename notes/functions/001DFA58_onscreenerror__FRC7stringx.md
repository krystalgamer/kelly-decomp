# onscreenerror__FRC7stringx

- Address: `0x001DFA58`
- Size: `0x2C` (44 bytes)
- Object: `game/files_hwosps2`
- Debug source: `C:/KS/SRC/hwosps2/ps2_errmsg.cpp`
- Reference source: `KS/SRC/HWOSPS2/ps2_errmsg.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 47.7273 | 45.4545 | `size44-platform-menu-core.cpp` |
| 2 | different | 88.6364 | 81.8182 | `size44-onscreenerror-3.cpp` |
| 3 | matched | 100.0 | 100.0 | `size44-onscreenerror-4.cpp` |

### Attempt 1 notes

The direct released call becomes a 36-byte sibling jump to the final flush.

### Attempt 2 notes

An ordinary local flush pointer retains the call frame, but a raw format
address is materialized with `lui`/`ori` instead of the target carried
`lui`/`addiu`.

### Attempt 3 notes

The shared string layout, local flush pointer, and relocatable named format
symbol produce the target after link.

## Outcome

The pointer/register constraints and compiler barrier were removed.
