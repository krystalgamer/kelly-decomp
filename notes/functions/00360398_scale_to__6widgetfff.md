# scale_to__6widgetfff

- Address: `0x00360398`
- Size: `0x2C` (44 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/widget.h`
- Reference source: `KS/SRC/widget.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

A minimal old-GCC vtable layout preserves the released timed overload's duplicated scale value and four-argument virtual dispatch at slot 0x80.

## Outcome

The released timed uniform `widget::scale_to` overload matched exactly on the first attempt.
