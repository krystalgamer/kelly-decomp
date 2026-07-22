# OnMenuOpen__9MenuEntryP4MenuP10MenuSystem

- Address: `0x0023EF90`
- Size: `0x48` (72 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/menu.cpp`
- Reference source: `KS/SRC/ks/menu.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 94.4444 | 88.8889 | `candidate.cpp` |
| 2 | different | 86.1111 | 83.3333 | `candidate.cpp` |
| 3 | different | 94.4444 | 88.8889 | `candidate.cpp` |
| 4 | different | 94.4444 | 88.8889 | `candidate.cpp` |
| 5 | different | 88.8889 | 66.6667 | `candidate.cpp` |

### Attempt 1 notes

The exact released Show(); Enable(); body against the shared released MenuEntry declaration reproduced all calls and control flow, but GCC swapped the two independent callee-save stores in the prologue.

### Attempt 2 notes

A leading normalized compiler barrier moved the this assignment between the saves and reduced the score.

### Attempt 3 notes

A trailing normalized barrier retained the original two-instruction prologue-order mismatch.

### Attempt 4 notes

An explicit source-level this alias retained the same prologue-order mismatch.

### Attempt 5 notes

As a documented last resort, an equivalent raw vtable layout was tested after the original-like declaration failed; it worsened scheduling and did not match.

## Outcome

Deferred after five source attempts. The released body is instruction-identical except for the order of the ra and s0 prologue stores, and allowed source-level scheduling variants did not reproduce the target order.
