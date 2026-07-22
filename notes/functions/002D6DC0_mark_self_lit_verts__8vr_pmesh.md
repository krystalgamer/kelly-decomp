# mark_self_lit_verts__8vr_pmesh

- Address: `0x002D6DC0`
- Size: `0x4C` (76 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/pmesh.cpp`
- Reference source: `KS/SRC/pmesh.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 89.4737 | 89.4737 | `candidate.cpp` |
| 2 | different | 89.4737 | 89.4737 | `candidate.cpp` |
| 3 | different | 73.6842 | 73.6842 | `candidate.cpp` |
| 4 | different | 88.1579 | 84.2105 | `candidate.cpp` |
| 5 | different | 89.4737 | 89.4737 | `candidate.cpp` |

## Attempt notes

Used the retained immutable `pmesh.cpp:2986-2992` reverse loop and expanded
the shared vr_pmesh prefix with the released 60-byte transformed vertex,
vertex count, and material-vector layout.  The exact body reproduces all
operations, but EE GCC emits the vertex-pointer decrement before the loop
branch and a nop delay slot; the target places a nop before the branch and
uses the decrement in its delay slot.  Loop, reference, clear, and normalized
barrier variants did not reproduce that schedule.

## Outcome

Deferred after five source-only attempts due the two-instruction loop
scheduling mismatch.
