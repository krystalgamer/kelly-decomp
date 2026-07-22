# render__16interface_widget

- Address: `0x00288B08`
- Size: `0x48` (72 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/interface.cpp`
- Reference source: `KS/SRC/interface.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 63.8889 | 55.5556 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

## Outcome

Released reticle and base-widget render calls matched after consolidating widget declarations and adding a normalized barrier to prevent the demonstrated tail call.
