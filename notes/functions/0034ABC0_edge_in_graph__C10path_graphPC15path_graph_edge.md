# edge_in_graph__C10path_graphPC15path_graph_edge

- Address: `0x0034ABC0`
- Size: `0x3C` (60 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/path.cpp`
- Reference source: `KS/SRC/path.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 66.6667 | 60.0 | `candidate.cpp` |
| 2 | different | 66.6667 | 60.0 | `candidate.cpp` |
| 3 | different | 60.0 | 40.0 | `candidate.cpp` |
| 4 | different | 66.6667 | 60.0 | `candidate.cpp` |
| 5 | different | 66.6667 | 60.0 | `candidate.cpp` |

### Attempt 1 notes

The released-source shadowing bug compiled to the target scan but omitted the target's loop-back nop (56/60 bytes).

### Attempt 2 notes

A reviewed barrier after iterator advancement did not affect scheduling; the loop-back nop remained absent.

### Attempt 3 notes

Moving the barrier before iterator advancement changed branch and return layout without matching.

### Attempt 4 notes

Expressing the optimized shadowed behavior directly still emitted the same 56-byte loop without the target nop.

### Attempt 5 notes

An equivalent continue-form loop also omitted the target nop. Deferred after five source attempts rather than forcing bytes.

## Outcome

The authentic shadowed-edge scan and equivalent C++ loop forms consistently omit one target loop-back nop; deferred after five source attempts.
