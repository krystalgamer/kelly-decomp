# GetText__11FEMenuEntry

- Address: `0x001DA7F0`
- Size: `0x3C` (60 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEMenu.h`
- Reference source: `KS/SRC/ks/FEMenu.h`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 93.3333 | 86.6667 | `candidate.cpp` |
| 2 | different | 93.3333 | 86.6667 | `candidate.cpp` |
| 3 | different | 93.3333 | 86.6667 | `candidate.cpp` |
| 4 | different | 22.7273 | 4.5455 | `candidate.cpp` |
| 5 | different | 93.3333 | 86.6667 | `candidate.cpp` |

### Attempt 1 notes

Restored TextString's authentic virtual method order through getText and returned it from the entry. The dispatch and all body instructions matched, but EE GCC saved s0 before ra while the target saves ra before s0.

### Attempt 2 notes

Introduced an explicit local TextString pointer while preserving the released return. Optimization produced the identical near-match and retained the same s0-before-ra prologue ordering.

### Attempt 3 notes

Restored the released PS2 stringx layout with `chars` and `my_buf` pointers. The compiler still emitted the same exact body and the same two swapped prologue saves.

### Attempt 4 notes

Materialized the returned stringx in a named local before returning it. This inhibited return-slot forwarding and expanded the function to 88 bytes with copy/destruction work, far from target.

### Attempt 5 notes

Used an explicit source-level ABI wrapper for the same return-slot-forwarding virtual call. It recovered the exact body but again saved s0 before ra; five source-only candidates were exhausted.

## Outcome

The released TextString getText forwarding call and layouts were recovered exactly, but five source-only variants could not reproduce the target ra-before-s0 prologue save order.
