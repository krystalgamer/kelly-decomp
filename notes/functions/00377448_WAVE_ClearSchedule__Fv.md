# WAVE_ClearSchedule__Fv

- Address: `0x00377448`
- Size: `0x40` (64 bytes)
- Object: `game/files_wave`
- Debug source: `C:/KS/SRC/ks/wave.cpp`
- Reference source: `KS/SRC/ks/wave.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 75.0 | 75.0 | `candidate.cpp` |
| 2 | different | 75.0 | 75.0 | `candidate.cpp` |
| 3 | different | 75.0 | 75.0 | `candidate.cpp` |
| 4 | different | 75.0 | 75.0 | `candidate.cpp` |
| 5 | different | 53.125 | 37.5 | `candidate.cpp` |

## Attempt notes

1. The exact released body matched all operations but emitted the type-max clear before `memset` argument setup instead of in its call delay slot.
2. Separating the zero value retained the same schedule.
3. Expressing the type-max assignment as the `memset` fill argument retained the same schedule.
4. Binding the three released call arguments to their ABI registers retained the same schedule.
5. Moving the independent type-max clear after `memset` changed the schedule substantially and did not reproduce the target.

## Outcome

Deferred after five source-authentic attempts. The remaining difference is compiler scheduling of an independent store, not reconstructed behavior.
