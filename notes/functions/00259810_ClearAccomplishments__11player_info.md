# ClearAccomplishments__11player_info

- Address: `0x00259810`
- Size: `0x2C` (44 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/player.cpp`
- Reference source: `KS/SRC/ks/player.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 81.8182 | 44.4444 | `candidate.cpp` |
| 2 | different | 25.0 | 22.2222 | `candidate.cpp` |
| 3 | different | 77.2727 | 33.3333 | `candidate.cpp` |
| 4 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The first faithful source shape exposed an isolated scheduling, layout, or sibling-call mismatch.

### Attempt 2 notes

The second source shape improved part of the layout or call form but retained a distinct target scheduling mismatch.

### Attempt 3 notes

The third source shape retained a distinct scheduling mismatch.

### Attempt 4 notes

The released helper clears all 20 accomplishment pointers and resets their count.

`KELLY_DECOMP_COMPILER_BARRIER()` is a matching-only annotation that emits no target instruction. It prevents EE GCC from applying the sibling/tail-call or scheduling transformation described above.

## Outcome

The released accomplishment clear matched exactly.
