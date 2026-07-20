# GetSpecialScale__11FEMenuEntryRfT1

- Address: `0x00156230`
- Size: `0x24` (36 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEMenu.cpp`
- Reference source: `KS/SRC/ks/FEMenu.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 72.5 | 60.0 | `candidate.cpp` |
| 2 | different | 72.5 | 60.0 | `candidate.cpp` |
| 3 | different | 72.5 | 60.0 | `candidate.cpp` |
| 4 | different | 72.5 | 60.0 | `candidate.cpp` |
| 5 | different | 75.0 | 70.0 | `candidate.cpp` |

### Attempt 1 notes

The first candidate exposed an access, aggregate-copy, bool-normalization, or scheduling mismatch.

### Attempt 2 notes

The previous source shape retained a branch, call-delay, or bool-normalization mismatch.

### Attempt 3 notes

The symbol-preserving integer return removed bool normalization, but GCC scheduled the final flag reload before `jr` instead of in its delay slot.

### Attempt 4 notes

A zero-instruction barrier did not move the final reload into the return delay slot.

### Attempt 5 notes

Marking the flag volatile changed the return lowering but still left the reload before `jr`; the five-attempt limit is exhausted.

## Outcome

Five source shapes could not place the final special-flag reload in the target return delay slot; best byte score was 75%.
