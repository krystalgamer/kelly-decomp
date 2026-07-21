# WAVE_Reset__Fv

- Address: `0x00373558`
- Size: `0x40` (64 bytes)
- Object: `game/files_wave`
- Debug source: `C:/KS/SRC/ks/wave.cpp`
- Reference source: `KS/SRC/ks/wave.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 70.3125 | 68.75 | `candidate.cpp` |
| 2 | different | 25.0 | 0.0 | `candidate.cpp` |
| 3 | different | 25.0 | 0.0 | `candidate.cpp` |
| 4 | different | 84.375 | 68.75 | `candidate.cpp` |
| 5 | different | 42.6471 | 29.4118 | `candidate.cpp` |

## Attempt notes

1. The exact released body tail-called `WAVE_ResetSchedule`.
2. A narrow post-call barrier prevented the tail call but moved the frame setup after the global-address loads.
3. Consuming a modeled return value also prevented the tail call but retained the nonmatching schedule.
4. Entry and post-call barriers restored the target size and call sequence, but saved `ra` before rather than after the four global-address loads.
5. Moving the entry barrier after the released assignments produced a larger, differently scheduled function.

## Outcome

Deferred after five source-authentic attempts. The released behavior is established, but no source form reproduced the target prologue schedule without forcing instructions.
