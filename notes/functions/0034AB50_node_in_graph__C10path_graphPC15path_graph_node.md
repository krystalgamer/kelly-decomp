# node_in_graph__C10path_graphPC15path_graph_node

- Address: `0x0034AB50`
- Size: `0x44` (68 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/path.cpp`
- Reference source: `KS/SRC/path.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 58.8235 | 47.0588 | `candidate.cpp` |
| 2 | different | 91.1765 | 88.2353 | `candidate.cpp` |
| 3 | different | 58.8235 | 47.0588 | `candidate.cpp` |
| 4 | different | 39.7059 | 5.8824 | `candidate.cpp` |
| 5 | different | 39.7059 | 5.8824 | `candidate.cpp` |

### Attempt 1 notes

Used the exact released iterator loop with the authentic vector offsets; GCC removed one target loop nop.

### Attempt 2 notes

Added a narrow barrier before increment for the demonstrated loop folding; it changed delay-slot placement but left two instructions mismatched.

### Attempt 3 notes

Moved the barrier after increment; GCC reverted to the compact loop.

### Attempt 4 notes

Staged the current node and increment before the tests to model iterator semantics explicitly; control flow diverged.

### Attempt 5 notes

Removed the barrier from the staged form; the same divergent compact loop remained.

## Outcome

Deferred after five source-only iterator forms; membership behavior and offsets match, but the released STL iterator produces a loop scheduling nop absent from the abbreviated layout.
