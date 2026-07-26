# acquire__12conglomerateUi

- Address: `0x00307DD0`
- Size: `0xD4` (212 bytes)
- Object: `game/files_misfits`
- Debug source: `C:/KS/SRC/conglom.cpp`
- Reference source: `KS/SRC/conglom.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 85.3774 | 75.4717 | `candidate.cpp` |
| 2 | different | 85.3774 | 75.4717 | `candidate.cpp` |
| 3 | different | 94.8113 | 88.6792 | `candidate.cpp` |
| 4 | different | 88.6792 | 81.1321 | `candidate.cpp` |
| 5 | different | 94.8113 | 88.6792 | `candidate.cpp` |

### Attempt 1 notes

The released two-pass member acquisition and relinking flow recovered all offsets and calls, but loop-entry and parent-index scheduling differed.

### Attempt 2 notes

Loading the member end before begin did not alter generated code.

### Attempt 3 notes

Explicit empty checks and do-while loops recovered target size and all but six scheduler instructions, reaching 94.8113%.

### Attempt 4 notes

Pinned member and parent iterators changed the parent-index register allocation and reduced the score.

### Attempt 5 notes

A zero-instruction end constraint retained the same 94.8113% loop-entry and parent-index mismatch.

## Outcome

The exact released two-pass member acquisition and relinking flow recovered target size, all offsets, and all calls. Five candidates could not reproduce six loop-entry and parent-index scheduler instructions; best byte score was 94.8113%.
