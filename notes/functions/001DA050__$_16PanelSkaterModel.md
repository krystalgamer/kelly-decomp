# _$_16PanelSkaterModel

- Address: `0x001DA050`
- Size: `0x1C` (28 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEPanel.h`
- Reference source: `KS/SRC/ks/FEPanel.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 7.1429 | 0.0 | `panel_skater_dtor.cpp` |
| 2 | different | 7.1429 | 0.0 | `panel_skater_dtor.cpp` |
| 3 | different | 14.2857 | 0.0 | `panel_skater_dtor.cpp` |
| 4 | matched | 100.0 | 100.0 | `panel_skater_dtor.cpp` |
| 5 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 5 notes

An ordinary derived destructor was tail-called in isolation. A symbol-preserving destructor wrapper plus a post-call barrier reproduces the target's implicit base-destructor call frame.

## Outcome

`PanelSkaterModel`'s generated destructor matched exactly using the recovered non-tail base-destructor wrapper.
