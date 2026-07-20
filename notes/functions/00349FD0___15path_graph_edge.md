# __15path_graph_edge

- Address: `0x00349FD0`
- Size: `0x34` (52 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/path.cpp`
- Reference source: `KS/SRC/path.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 84.6154 | 84.6154 | `candidate.cpp` |
| 2 | different | 78.8462 | 84.6154 | `candidate.cpp` |
| 3 | different | 84.6154 | 84.6154 | `candidate.cpp` |
| 4 | different | 65.3846 | 61.5385 | `candidate.cpp` |
| 5 | different | 84.6154 | 84.6154 | `candidate.cpp` |

### Attempt 1 notes

Used a typed constructor with explicit vtable install followed by clear(). The body matched, but EE GCC copied `this` into s0 before saving `ra`; the target saves `ra` first. Best instruction score: 84.62%.

### Attempt 2 notes

Recast the constructor as an ABI wrapper. The clear symbol remained unresolved in the isolated object, and the same prologue ordering mismatch remained.

### Attempt 3 notes

Bound the clear method to its target address in the ABI wrapper. This restored exact call bytes but retained the two swapped prologue instructions from attempt 1.

### Attempt 4 notes

Added an entry scheduling barrier. The compiler substantially reordered the prologue and vtable setup, reducing the match to 65.38%.

### Attempt 5 notes

Bound the saved object pointer explicitly to s0 in the ABI wrapper. Output returned to attempt 3's sequence and retained the target ra-save/s0-copy ordering mismatch.

## Outcome

Five typed and ABI-shaped constructor candidates could not reproduce the target ra-save before s0-copy prologue ordering; best score was 84.6154%.
