# is_patrol_id__C15path_graph_edgei

- Address: `0x0034A080`
- Size: `0x1C` (28 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/path.cpp`
- Reference source: `KS/SRC/path.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

A minimal layout places the edge flags at offset eight and preserves the released shifted patrol-bit test.

## Outcome

The released `path_graph_edge::is_patrol_id` predicate matched exactly.
