# TurnOffAll__16SaveLoadFrontEnd

- Address: `0x0019B6F0`
- Size: `0x44` (68 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/SaveLoadFrontEnd.cpp`
- Reference source: `KS/SRC/ks/SaveLoadFrontEnd.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 63.2353 | 52.9412 | `candidate.cpp` |
| 2 | different | 94.1176 | 88.2353 | `candidate.cpp` |
| 3 | different | 73.5294 | 70.5882 | `candidate.cpp` |
| 4 | different | 94.1176 | 88.2353 | `candidate.cpp` |
| 5 | different | 94.1176 | 88.2353 | `candidate.cpp` |

### Attempt 1 notes

Used the exact released three calls; the final call was tail-called.

### Attempt 2 notes

Added a narrow post-call barrier; only the independent s0/ra save order differed.

### Attempt 3 notes

Added an entry barrier to influence prologue scheduling; it moved call setup and reduced the score.

### Attempt 4 notes

Bound the released this pointer to s0; the save order remained different.

### Attempt 5 notes

Used an explicit const self alias; the same two-save scheduling difference remained.

## Outcome

Deferred after five source-level attempts; the released three calls match semantically, but the compiler orders independent s0/ra saves differently.
