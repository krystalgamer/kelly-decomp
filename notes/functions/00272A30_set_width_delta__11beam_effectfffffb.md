# set_width_delta__11beam_effectfffffb

- Address: `0x00272A30`
- Size: `0xE4` (228 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/beam.cpp`
- Reference source: `KS/SRC/beam.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 97.3684 | 92.9825 | `candidate-1-exact-released.cpp` |
| 2 | different | 97.807 | 94.7368 | `candidate-2-reversed-equivalent-condition.cpp` |
| 3 | different | 80.6034 | 70.6897 | `candidate-3-default-then-invert.cpp` |
| 4 | different | 97.807 | 94.7368 | `candidate-4-ternary-mode.cpp` |
| 5 | different | 92.5439 | 87.7193 | `candidate-5-local-mode-selection.cpp` |

## Outcome

Deferred after five source-faithful attempts. The released beam width effect body, authentic layouts, allocation, vtable binding, and all arithmetic match except the compiler canonicalizes the inverted mode-selection branch to the opposite equivalent polarity.
