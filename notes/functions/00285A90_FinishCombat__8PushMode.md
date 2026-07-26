# FinishCombat__8PushMode

- Address: `0x00285A90`
- Size: `0xE0` (224 bytes)
- Object: `game/files_misc1`
- Debug source: `ks/mode_push.cpp`
- Reference source: `KS/SRC/ks/mode_push.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 5.8036 | 0.0 | `candidate.cpp` |
| 2 | different | 31.25 | 16.0714 | `candidate-2.cpp` |
| 3 | different | 46.4286 | 30.3571 | `candidate-3.cpp` |
| 4 | different | 46.4286 | 30.3571 | `candidate-4.cpp` |
| 5 | different | 46.4286 | 30.3571 | `candidate-5-cxx98-while.cpp` |

## Outcome

Deferred after five source-faithful attempts. The target extends the released PushMode combat loop with bounded and stuck-state guards, while the remaining exact-size mismatch is a scheduler nop and non-tail call that normal EE GCC does not emit without forbidden compiler manipulation.
