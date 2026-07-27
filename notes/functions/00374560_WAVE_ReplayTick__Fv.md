# WAVE_ReplayTick__Fv

- Address: `0x00374560`
- Size: `0xF4` (244 bytes)
- Object: `game/files_wave`
- Debug source: `C:/KS/SRC/ks/wave.cpp`
- Reference source: `KS/SRC/ks/wave.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 26.6393 | 19.6721 | `candidate.cpp` |

### Attempt 1 notes

Exact released `WAVE_ReplayTick` body using the canonical wave and replay declarations. It emitted 212 bytes: the target contains an additional slow-replay toggle at `0x00484BE0`, and the released build tail-called `WAVE_GetBreakInfo` where the target retains a normal call/epilogue.

## Outcome

Exact released replay tick omitted target-only slow-replay toggle and tail-call shape.
