# set_color__6widgetfff

- Address: `0x0033F038`
- Size: `0x40` (64 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/widget.cpp`
- Reference source: `KS/SRC/widget.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 7.5 | 0.0 | `candidate.cpp` |
| 2 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 3 | different | 56.25 | 37.5 | `candidate.cpp` |

## Outcome

The manual widget vtable and local color declaration were removed. Shared
const-reference ABI forms still reorder the vtable load and stack-color setup,
so the overload was deferred.
