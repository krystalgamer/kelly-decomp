# _$_16PanelSkaterModel

- Address: `0x001DA050`
- Size: `0x1C` (28 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEPanel.h`
- Reference source: `KS/SRC/ks/FEPanel.h`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 17.8571 | 0.0 | `native_header_wrapper_probe_1.cpp` |
| 2 | different | 17.8571 | 0.0 | `native_header_destructor_probe_2.cpp` |
| 3 | different | 7.1429 | 0.0 | `native_header_destructor_probe_3.cpp` |

## Outcome

Virtual destructor forms emit a 20-byte vptr-setting tail call, while the
nonvirtual form emits an eight-byte tail call. The target is a 28-byte normal
base-destructor call, so the manual wrapper was removed and the function was
deferred.
