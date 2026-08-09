# SetDisplay__17ObjectAlertWidgetb

- Address: `0x0016A450`
- Size: `0x34` (52 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/igo_widget_objectalert.cpp`
- Reference source: `KS/SRC/ks/igo_widget_objectalert.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released base `SetDisplay` call followed by the inherited display
assignment uses the shared IGO widget hierarchy.

## Outcome

The released object-alert display setter remains exact through the shared
declaration.
