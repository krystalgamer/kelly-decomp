# _$_17ObjectAlertWidget

- Address: `0x0016A428`
- Size: `0x28` (40 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/igo_widget_objectalert.cpp`
- Reference source: `KS/SRC/ks/igo_widget_objectalert.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 5.0 | 0.0 | `size40-widget-dtors.cpp` |
| 2 | different | 5.0 | 0.0 | `size40-widget-dtors-2.cpp` |
| 3 | different | 5.0 | 0.0 | `size40-widget-dtors-3.cpp` |

## Outcome

Across three native forms, the compiler-generated derived destructor becomes a vptr-setting tail call. The closest candidate is 20 bytes
rather than the target 40 bytes, so the matching-only implementation was
removed and the target function was deferred.
