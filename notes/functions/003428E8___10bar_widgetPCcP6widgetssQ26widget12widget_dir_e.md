# __10bar_widgetPCcP6widgetssQ26widget12widget_dir_e

- Address: `0x003428E8`
- Size: `0xB8` (184 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/widget.cpp`
- Reference source: `KS/SRC/widget.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

The exact released constructor matched after extending the shared widget declaration with its original constructor, nested direction enum, and source-faithful bar-widget fields. The initial compile-only miss exposed the need for a harmless shared default constructor used by other reduced derived declarations.

## Outcome

Matched the released bar-widget constructor with shared widget inheritance and layout.
