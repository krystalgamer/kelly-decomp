# Update__18SpecialMeterWidgetf

- Address: `0x00166C48`
- Size: `0xC8` (200 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/igo_widget_specialmeter.cpp`
- Reference source: `KS/SRC/ks/igo_widget_specialmeter.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 50.5 | 42.0 | `candidate.cpp` |
| 2 | different | 51.0 | 42.0 | `candidate.cpp` |
| 3 | different | 51.0 | 42.0 | `candidate.cpp` |
| 4 | different | 33.5 | 16.0 | `candidate.cpp` |
| 5 | different | 30.5 | 14.0 | `candidate.cpp` |

## Outcome

Five attempts recovered the flashing meter behavior, but FP branch and inherited virtual-call scheduling remained different.
