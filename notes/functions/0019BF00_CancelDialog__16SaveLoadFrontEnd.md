# CancelDialog__16SaveLoadFrontEnd

- Address: `0x0019BF00`
- Size: `0x34` (52 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/SaveLoadFrontEnd.cpp`
- Reference source: `KS/SRC/ks/SaveLoadFrontEnd.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 53.5714 | 42.8571 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Used the released DialogActive guard followed by DialogNoPressed. EE GCC converted the second call into a sibling tail jump, duplicating the epilogue path and producing 56 bytes.

### Attempt 2 notes

The released dialog-active guard uses the shared save/load declaration. A local
no-button function pointer preserves the normal call.

## Outcome

The compiler barrier and symbol wrapper were removed; the released cancellation
remains exact.
