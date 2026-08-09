# End__12BalanceMeter

- Address: `0x00225240`
- Size: `0x30` (48 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/kellyslater_controller.cpp`
- Reference source: `KS/SRC/ks/kellyslater_controller.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 93.75 | 100.0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `size48-gameplay-core.cpp` |

### Attempt 2 notes

The released method forwards `(player_num, vert_meter, false)` to the global IGO. A symbol-preserving alias keeps the target repeated-bool `ibT2` mangling, and the trailing barrier preserves the normal call frame.

### Attempt 3 notes

The shared balance-meter declaration and a local function pointer preserve the
normal IGO call without a compiler barrier.

## Outcome

The local layout and compiler barrier were removed.
