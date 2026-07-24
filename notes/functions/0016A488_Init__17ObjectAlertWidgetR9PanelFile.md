# Init__17ObjectAlertWidgetR9PanelFile

- Address: `0x0016A488`
- Size: `0x70` (112 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/igo_widget_objectalert.cpp`
- Reference source: `KS/SRC/ks/igo_widget_objectalert.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 96.4286 | 85.7143 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

Read the panel lookup label, objectRoot field, display/hide/update calls, and vtable slots. Fixing both virtual callee registers matched on attempt 2.

## Outcome

Matched object alert widget initialization
