# render_kelly_slater_stuff__21world_dynamics_systemi

- Address: `0x00225288`
- Size: `0x48` (72 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/kellyslater_main.cpp`
- Reference source: `KS/SRC/ks/kellyslater_main.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 55.2632 | 57.8947 | `render-1.cpp` |
| 2 | different | 55.2632 | 57.8947 | `render-2.cpp` |
| 3 | different | 16.3462 | 0.0 | `render-3.cpp` |

## Outcome

Three native forms of the released water/particle render sequence produced a different call schedule and size; the compiler barrier and absolute aliases were removed.
