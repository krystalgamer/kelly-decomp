# LoadPanel__9HelpbarFEb

- Address: `0x001BD7A0`
- Size: `0x40` (64 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/GraphicalMenuSystem.cpp`
- Reference source: `KS/SRC/ks/GraphicalMenuSystem.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 93.75 | 75.0 | `candidate.cpp` |
| 2 | different | 93.75 | 75.0 | `candidate.cpp` |
| 3 | different | 90.625 | 75.0 | `candidate.cpp` |
| 4 | different | 93.75 | 75.0 | `candidate.cpp` |
| 5 | different | 93.75 | 75.0 | `candidate.cpp` |

### Attempt 1 notes

Manual ABI reconstruction matched behavior and instruction order but allocated the vtable/function registers oppositely.

### Attempt 2 notes

Explicit table, adjustment, and function locals retained the same register-allocation mismatch.

### Attempt 3 notes

A native virtual-call reconstruction confirmed the end-vptr ABI but included one extra virtual slot and retained the register mismatch.

### Attempt 4 notes

Correcting the native virtual slot and adding a narrow scheduling barrier still allocated the vtable/function registers oppositely.

### Attempt 5 notes

Reversing authentic function/adjustment local declarations also retained the register-allocation mismatch.

## Outcome

Five source-authentic panel-load and SetPQIndices reconstructions could not reproduce the target vtable/function register allocation.
