# script_strings_deconstruct__Fv

- Address: `0x00314390`
- Size: `0xD4` (212 bytes)
- Object: `game/files_script`
- Debug source: `C:/KS/SRC/script_lib.cpp`
- Reference source: `KS/SRC/script_lib.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 94.3396 | 92.4528 | `candidate.cpp` |
| 2 | different | 49.5283 | 39.6226 | `candidate.cpp` |
| 3 | different | 52.3148 | 44.4444 | `candidate.cpp` |
| 4 | different | 18.75 | 12.5 | `candidate.cpp` |
| 5 | different | 94.3396 | 92.4528 | `candidate.cpp` |

### Attempt 1 notes

The exact released reset loop and four global strings matched target size; only four argument setup instructions for two assignments differed.

### Attempt 2 notes

Explicit scoped temporaries changed lifetime scheduling and shortened the function.

### Attempt 3 notes

Destination-register clobbers added an instruction and disturbed later assignments.

### Attempt 4 notes

Manual constructor/assignment/destructor helpers expanded the function and changed register allocation.

### Attempt 5 notes

Restoring the released expression shape with an end constraint retained the best 94.3396% score and four scheduler differences.

## Outcome

The exact released static-string reset loop and four global assignments matched target size. Five candidates could not reproduce four argument setup scheduler placements; best byte score was 94.3396%.
