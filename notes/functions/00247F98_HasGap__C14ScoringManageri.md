# HasGap__C14ScoringManageri

- Address: `0x00247F98`
- Size: `0x24` (36 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/scoringmanager.cpp`
- Reference source: `KS/SRC/ks/scoringmanager.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 91.6667 | 100.0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `size36-scoring-has-gap-96.cpp` |

### Attempt 1 notes

The first candidate exposed an address-register, inner-symbol, or independent-store scheduling mismatch.

### Attempt 2 notes

Restoring the 96-entry trick array places `chain.series` at 0x1b4. The canonical `list::back()` expression emits the released final-series lookup.

## Outcome

The released `ScoringManager::HasGap` wrapper matched exactly.
