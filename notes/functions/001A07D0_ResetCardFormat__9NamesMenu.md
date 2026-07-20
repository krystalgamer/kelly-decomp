# ResetCardFormat__9NamesMenu

- Address: `0x001A07D0`
- Size: `0x34` (52 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/SaveLoadFrontEnd.cpp`
- Reference source: `KS/SRC/ks/SaveLoadFrontEnd.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 84.6154 | 54.5455 | `candidate.cpp` |
| 2 | policy-invalid | 30.3571 | 0.0 | `candidate.cpp` |
| 3 | policy-invalid | 100.0 | 100.0 | `candidate.cpp` |
| 4 | different | 80.7692 | 36.3636 | `candidate.cpp` |
| 5 | different | 76.9231 | 18.1818 | `candidate.cpp` |

### Attempt 1 notes

Used the released two-card loop and recovered MemCard layout. Every operation matched, but EE GCC placed the 28-byte pointer decrement before the three loop nops rather than in the backward branch delay slot.

### Attempt 2 notes

Invalid attempt. It began replacing the C++ loop with a hand-written instruction stream.

### Attempt 3 notes

Invalid attempt. It replaced the released loop with the target instructions and was not a decompilation.

### Attempt 4 notes

Used a source-level descending index loop. It retained the 52-byte size, but swapped the counter and stored-value setup and still advanced the record pointer before the branch.

### Attempt 5 notes

Used an explicit descending `MemCard` pointer in the loop increment. EE GCC again moved the pointer decrement before the backward branch.

## Outcome

Deferred after five attempts. No source-level reconstruction reproduced the target delay-slot schedule, so the hand-written assembly match was removed.
