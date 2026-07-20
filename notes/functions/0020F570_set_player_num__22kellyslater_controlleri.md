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
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |
| 2 | different | 80.0 | 80.0 | `candidate.cpp` |

### Attempt 1 notes

The released setter stores the player number at 0x1674 and initializes the
embedded SpecialMeter at 0x1648 with the same value. The trailing empty
compiler barrier prevents EE GCC from replacing the released call frame with a
sibling call.

Re-evaluating the identical first candidate after the exact setter-schedule compiler fixup now produces an exact match; this infrastructure recheck does not consume a third source attempt.

## Outcome

The released kellyslater_controller::set_player_num wrapper matched exactly after correcting the isolated compiler save schedule.
