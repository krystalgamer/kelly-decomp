# CheckTrickPerformed__23IGOLearnNewTrickManager

- Address: `0x0015B578`
- Size: `0xD8` (216 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/igolearn_new_trickmanager.cpp`
- Reference source: `KS/SRC/ks/igolearn_new_trickmanager.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 87.963 | 75.9259 | `candidate.cpp` |
| 2 | different | 45.8333 | 35.1852 | `candidate.cpp` |
| 3 | different | 90.2778 | 79.6296 | `candidate.cpp` |
| 4 | different | 92.1296 | 83.3333 | `candidate.cpp` |
| 5 | different | 94.4444 | 92.5926 | `candidate.cpp` |

### Attempt 1 notes

The released body used an unadjusted trick-text global and integer Print signature, leaving relocation and temporary-call differences.

### Attempt 2 notes

Corrected the text binding and Print symbol but pinned the icon counter across the whole function, shortening the epilogue.

### Attempt 3 notes

Restored direct field use and exact globals, reaching 90.2778% with load-order and return scheduling differences.

### Attempt 4 notes

Scoped count/previous locals recovered the target initial load order and raised the score to 92.1296%.

### Attempt 5 notes

Pinned only the final return load to the target register, reaching the best 94.4444% score. Four epilogue placements still differed.

## Outcome

Recovered the released counter update, singular/plural formatting, trick-text lookup, IGO print call, and boolean return. Five candidates could not reproduce four final epilogue placements; best byte score was 94.4444%.
