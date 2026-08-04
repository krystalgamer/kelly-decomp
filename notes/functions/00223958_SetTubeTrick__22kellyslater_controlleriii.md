# SetTubeTrick__22kellyslater_controlleriii

- Address: `0x00223958`
- Size: `0x20` (32 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/kellyslater_controller.cpp`
- Reference source: `KS/SRC/ks/kellyslater_controller.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 93.75 | 75.0 | `set_tube_trick_order_1.cpp` |
| 2 | different | 93.75 | 75.0 | `set_tube_trick_order_2.cpp` |
| 3 | different | 93.75 | 75.0 | `set_tube_trick_probe_3.cpp` |

## Outcome

The shared controller layout is correct, but all three ordinary assignment
forms reverse the final `current_trick_time` and `left_stick_pressed` stores.
The former compiler-barrier match was removed and the function was deferred.
