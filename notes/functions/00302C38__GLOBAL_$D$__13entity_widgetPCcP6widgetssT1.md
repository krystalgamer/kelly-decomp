# _GLOBAL_$D$__13entity_widgetPCcP6widgetssT1

- Address: `0x00302C38`
- Size: `0x20` (32 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/bp_tree.h`
- Reference source: `KS/SRC/bp_tree.h`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 0.0 | 0.0 | `size32-script-thunks-1.cpp` |
| 2 | different | 0.0 | 0.0 | `size32-script-thunks-2.cpp` |
| 3 | different | 0.0 | 0.0 | `size32-script-thunks-3.cpp` |

## Outcome

Three direct forms collapse the generated destruction thunk to a 12-byte sibling
call. The manual generated-symbol wrapper was removed and the target returned
to raw text.
