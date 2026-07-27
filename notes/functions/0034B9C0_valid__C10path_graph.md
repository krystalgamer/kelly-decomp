# valid__C10path_graph

- Address: `0x0034B9C0`
- Size: `0x130` (304 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/path.cpp`
- Reference source: `KS/SRC/path.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 85.1974 | 76.3158 | `candidate.cpp` |

### Attempt 1 notes

FIRST PASS wave 24 lane B3. Tested the exact released `path_graph::valid() const` definition once with minimal self-contained declarations for `vector`, `stringx`, `path_graph_node`, `path_graph_edge`, and `path_graph`, preserving the member layouts and external graph-membership calls required by the released body. The candidate compiled and emitted the requested symbol but differed: 259/304 compared bytes (85.1974%) and 58/76 instructions (76.3158%); candidate and target were both 304 bytes. Per first-pass policy, no variants, diff chasing, build, integration, finalization, queue edits, or source/prefix/shared proposal were attempted.

## Outcome

The exact released path-graph validity check differed from the target; the sole attempt scored 85.1974%.
