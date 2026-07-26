# ToFEReturn__13BeachFrontEnd

- Address: `0x00190398`
- Size: `0xD4` (212 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/BeachFrontEnd.cpp`
- Reference source: `KS/SRC/ks/BeachFrontEnd.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 78.3019 | 66.0377 | `candidate.cpp` |
| 2 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 3 | different | 89.1509 | 81.1321 | `candidate.cpp` |
| 4 | different | 81.6038 | 75.4717 | `candidate.cpp` |
| 5 | different | 89.1509 | 81.1321 | `candidate.cpp` |

### Attempt 1 notes

The exact released body and recovered field offsets matched the virtual-call sequence, but the built vtable needed one shipped-source tail slot and GCC tail-called `UpdateBeach`.

### Attempt 2 notes

The first barrier spelling was not visible in the isolated candidate context and failed to compile.

### Attempt 3 notes

Added the shipped FEMenu vtable tail slot and blocked the final sibling call. All code after the five saved-state assignments matched; the initial load/store and prologue schedule remained different at 89.1509%.

### Attempt 4 notes

Pinned the five saved values to the target registers. This recovered the load order but disturbed the zero argument and store schedule, lowering the score.

### Attempt 5 notes

Restored the released assignment order, used typed shared-state padding, and changed the zero-instruction tail barrier. The same 89.1509% initial scheduler mismatch remained.

## Outcome

The exact released body, recovered field offsets, shipped menu-vtable tail slot, and all post-save virtual calls matched. Five candidates could not reproduce the target prologue and initial five-field scheduler order; best byte score was 89.1509%.
