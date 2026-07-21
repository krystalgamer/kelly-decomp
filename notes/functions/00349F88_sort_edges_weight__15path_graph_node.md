# sort_edges_weight__15path_graph_node

- Address: `0x00349F88`
- Size: `0x3C` (60 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/path.cpp`
- Reference source: `KS/SRC/path.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 10.0 | 0.0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The initial source used a synthetic vector symbol, normalized the flag to bool, and tail-called the sorter.

### Attempt 2 notes

The released vector symbol and raw flag mask match exactly; the reviewed barrier narrowly prevents the demonstrated sorter tail call.

## Outcome

The released sorted flags and edge-weight sort call match exactly with one reviewed barrier preventing a demonstrated tail optimization.
