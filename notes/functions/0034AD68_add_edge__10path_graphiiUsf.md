# add_edge__10path_graphiiUsf

- Address: `0x0034AD68`
- Size: `0x38` (56 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/path.cpp`
- Reference source: `KS/SRC/path.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 83.9286 | 57.1429 | `candidate.cpp` |
| 2 | different | 66.0714 | 42.8571 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released overload indexes the node vector and forwards both nodes, flags, and modifier to the pointer overload. A trailing empty barrier prevents sibling-call conversion while emitting no instruction.

`KELLY_DECOMP_COMPILER_BARRIER()` is a matching-only annotation that emits no target instruction. It preserves the released ordinary forwarding call.

### Attempt 2 notes

Made the right-hand node index calculation explicit and pinned it with an empty barrier before calculating the left index. This sought the released right-to-left argument evaluation while retaining ordinary vector indexing behavior.

### Attempt 3 notes

Restored the original vector operator[] abstraction rather than direct pointer arithmetic. This tests whether the released inlining context recovers the target right-to-left evaluation schedule.

`KELLY_DECOMP_COMPILER_BARRIER()` is a matching-only annotation that emits no target instruction. It prevents the final forwarding call from becoming a sibling call.

## Outcome

The original indexed path-edge overload matches exactly with the authentic vector operator and a narrow empty sibling-call barrier.
