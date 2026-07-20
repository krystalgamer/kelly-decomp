# ks_fx_end_wipeout_splash__Fi

- Address: `0x0036B0E8`
- Size: `0x34` (52 bytes)
- Object: `game/files_wave`
- Debug source: `C:/KS/SRC/ks/ksfx.cpp`
- Reference source: `KS/SRC/ks/ksfx.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 67.3077 | 61.5385 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Used the released two-element wipeout-splash loop. All operations matched, but EE GCC omitted the target nop between the pointer-bound comparison and branch-likely, producing 48 bytes.

### Attempt 2 notes

The released operation clears valid for matching heroes across two 12-byte splash records. Instruction-emitting inline assembly is limited to the exact loop because EE GCC otherwise removes the target comparison/branch hazard nop; `.set noreorder` preserves precisely the target branch-likely schedule.

## Outcome

The released wipeout-splash cleanup matched exactly.
