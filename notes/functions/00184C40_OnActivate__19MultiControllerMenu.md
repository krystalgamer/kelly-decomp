# OnActivate__19MultiControllerMenu

- Address: `0x00184C40`
- Size: `0xBC` (188 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/MainFrontEnd.cpp`
- Reference source: `KS/SRC/ks/MainFrontEnd.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 64.8936 | 50.0 | `candidate.cpp` |
| 2 | different | 17.5 | 6.0 | `candidate.cpp` |
| 3 | different | 24.4681 | 12.766 | `candidate.cpp` |
| 4 | different | 16.5 | 6.0 | `candidate.cpp` |
| 5 | different | 16.5 | 6.0 | `candidate.cpp` |

### Attempt 1 notes

The reconstructed helpbar activation sequence matched the target size and call
set, but temporary lifetime and saved-register scheduling differed.

### Attempt 2 notes

Scoping the temporary before helpbar reformatting introduced an extra saved
register and a 112-byte frame.

### Attempt 3 notes

Explicit ABI calls restored the target size but used a different absolute
frontend-manager addressing sequence.

### Attempt 4 notes

Binding the empty string and helpbar registers still required an extra saved
temporary and produced 200 bytes.

### Attempt 5 notes

The final source-faithful C++ variant retained the 200-byte temporary schedule
and did not match the target prologue.

## Outcome

Five source-level variants reproduced the helpbar calls and string temporary semantics, but the original whole-TU prologue and temporary lifetime scheduling did not match.
