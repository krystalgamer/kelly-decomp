# add_edge__10path_graphP15path_graph_nodeT1Usf

- Address: `0x0034ADA0`
- Size: `0x1A4` (420 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/path.cpp`
- Reference source: `KS/SRC/path.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 27.1429 | 20.9524 | `candidate.cpp` |

### Attempt 1 notes

# Attempt 1 — exact released source

- Used the exact released `path_graph::add_edge` body with minimal standalone
  declarations.
- Result: **different**
- Byte score: **27.1429%**
- Instruction score: **20.9524%**
- Candidate size: **280 bytes**; target size: **420 bytes**
- No variants, diff chasing, later attempts, build, finalization, integration,
  tracked-file edits, commit, or push were performed.

## Citations

- `kelly-slaters-pro-surfer/KS/SRC/path.cpp:573-598`
- `kelly-slaters-pro-surfer/KS/SRC/path.h:25-180,329-376`
- `tmp/functions/0034ADA0_add_edge__10path_graphP15path_graph_nodeT1Usf/attempt-1/result.json`

## Outcome

The exact released path-graph edge addition differed at 27.1429% byte score; no source variant was attempted.
