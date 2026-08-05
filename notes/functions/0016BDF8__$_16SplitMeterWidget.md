# _$_16SplitMeterWidget

- Address: `0x0016BDF8`
- Size: `0x28` (40 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/igo_widget_splitmeter.cpp`
- Reference source: `KS/SRC/ks/igo_widget_splitmeter.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 5 | 0.0 | `size40-menu-dtors.cpp` |
| 2 | different | 5 | 0.0 | `size40-menu-dtors-2.cpp` |
| 3 | different | 5 | 0.0 | `size40-menu-dtors-3.cpp` |

## Outcome

Across three native forms, the compiler-generated destructor becomes a vptr-setting tail call. The closest ordinary candidate is
20 bytes rather than the target 40 bytes, so the matching-only body was
removed and the target function was deferred.
