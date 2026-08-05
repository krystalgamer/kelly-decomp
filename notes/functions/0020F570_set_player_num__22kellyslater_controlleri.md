# set_player_num__22kellyslater_controlleri

- Address: `0x0020F570`
- Size: `0x28` (40 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/kellyslater_controller.cpp`
- Reference source: `KS/SRC/ks/kellyslater_controller.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 7.5 | 0.0 | `size40-gameplay-core.cpp` |
| 2 | matched | 100.0 | 100.0 | `size40-gameplay-core-2.cpp` |
| 3 | different | 7.5 | 0.0 | `size40-gameplay-core-3.cpp` |

## Outcome

The shared controller embeds the canonical `SpecialMeter`; an ordinary local initializer pointer retains the target call frame.
