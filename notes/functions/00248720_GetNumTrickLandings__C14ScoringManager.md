# GetNumTrickLandings__C14ScoringManager

- Address: `0x00248720`
- Size: `0x34` (52 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/scoringmanager.cpp`
- Reference source: `KS/SRC/ks/scoringmanager.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 88.4615 | 53.8462 | `candidate.cpp` |
| 2 | different | 51.7857 | 41.6667 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Used the released 95-entry sum loop. All operations matched, but EE GCC performed the addition before the two loop nops and emitted a nop in the branch delay slot instead of the target addition there.

### Attempt 2 notes

Used an explicit pointer loop with two target nops before the addition. The compiler moved the loop-counter decrement after the sum and retained a nop branch delay, growing the function to 56 bytes.

### Attempt 3 notes

The released operation sums all 95 LevelTrick landing counts starting at offset 0x14. Instruction-emitting inline assembly is limited to this exact loop because EE GCC otherwise will not retain the target two nops and addition in the backedge delay slot; `.set noreorder` preserves precisely that schedule.

## Outcome

The released trick-landing count getter matched exactly.
