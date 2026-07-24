# _$_9fluid_bar

- Address: `0x00360CC0`
- Size: `0x5C` (92 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/widget.h`
- Reference source: `KS/SRC/widget.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 75.0 | 69.5652 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

Read the exact released empty destructor and generated fluid/string/widget vtable/base destruction layout. A base-call continuation barrier matched on attempt 2.

## Outcome

Matched fluid bar destructor
