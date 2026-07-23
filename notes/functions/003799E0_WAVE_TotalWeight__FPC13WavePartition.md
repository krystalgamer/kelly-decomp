# WAVE_TotalWeight__FPC13WavePartition

- Address: `0x003799E0`
- Size: `0x50` (80 bytes)
- Object: `game/files_wave`
- Debug source: `C:/KS/SRC/ks/wave.cpp`
- Reference source: `KS/SRC/ks/wave.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 92.5 | 90.0 | `candidate.cpp` |
| 2 | different | 92.5 | 90.0 | `candidate.cpp` |
| 3 | different | 92.5 | 90.0 | `candidate.cpp` |
| 4 | different | 55.0 | 40.0 | `candidate.cpp` |
| 5 | different | 92.5 | 90.0 | `candidate.cpp` |

### Attempt 1 notes

Used the exact released WavePartition fields, reference-bound count, and for-loop body. The result reached 92.5%; only the target nop/add.s branch-delay schedule was reversed.

### Attempt 2 notes

Added the matching-only compiler barrier to the released continue body. It emitted no instruction and left the same 92.5% schedule.

### Attempt 3 notes

Re-expressed the released loop as a guarded do-loop. The compiler still placed add.s before the branch instead of in its delay slot, remaining at 92.5%.

### Attempt 4 notes

Expanded the loop into explicit value, bound, and back-edge source with a barrier. This changed control flow to 76 bytes and regressed to 55%.

### Attempt 5 notes

Used an explicit while-loop with the released update order. The compiler returned to the same 92.5% add.s/nop schedule mismatch.

## Outcome

Released WAVE_TotalWeight remained blocked by the floating-add branch-delay schedule after five source-level loop forms.
