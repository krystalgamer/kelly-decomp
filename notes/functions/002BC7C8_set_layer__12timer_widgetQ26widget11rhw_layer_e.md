# set_layer__12timer_widgetQ26widget11rhw_layer_e

- Address: `0x002BC7C8`
- Size: `0xF8` (248 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/widget_script.cpp`
- Reference source: `KS/SRC/widget_script.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 92.7419 | 79.0323 | `candidate.cpp` |

### Attempt 1 notes

# Attempt 1

Used the released `timer_widget::set_layer` body verbatim with the authentic widget layer enum, virtual `set_layer` declaration, base layout, and timer bitmap-pointer members. The candidate compiled to 248 bytes but differed: 92.7419% byte score and 79.0323% instruction score. No second attempt was made.

## Outcome

Exact released timer widget set_layer source differed from the target; preserved attempt 1 for the later Sol pass.
