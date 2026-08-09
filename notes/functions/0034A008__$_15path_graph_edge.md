# _$_15path_graph_edge

- Address: `0x0034A008`
- Size: `0x50` (80 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/path.cpp`
- Reference source: `KS/SRC/path.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Read the exact released destructor body and path_graph_edge declaration, then reused the established generated deleting-destructor pattern with the exact vtable, clear helper, and delete helper.

`KELLY_DECOMP_COMPILER_BARRIER()` is a matching-only annotation that emits no target instruction. It prevents EE GCC from applying the sibling/tail-call or scheduling transformation described above.

## Outcome

The handwritten compiler-generated destructor wrapper was removed. The shared
class cannot yet reproduce its exact deleting form, so it was deferred.
