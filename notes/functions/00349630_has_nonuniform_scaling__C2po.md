# has_nonuniform_scaling__C2po

- Address: `0x00349630`
- Size: `0xF4` (244 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/po.cpp`
- Reference source: `KS/SRC/po.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 86.0656 | 81.9672 | `candidate.cpp` |
| 2 | different | 17.3387 | 4.8387 | `candidate.cpp` |
| 3 | different | 84.7656 | 79.6875 | `candidate.cpp` |
| 4 | different | 84.7656 | 79.6875 | `candidate.cpp` |
| 5 | different | 86.0656 | 81.9672 | `candidate.cpp` |

### Attempt 1 notes

Exact released body with faithful vector3d, matrix4x4, po, and global declarations. The first 50 instructions matched; the final short-circuit return and loop-back schedule made the candidate four bytes shorter.

### Attempt 2 notes

Split the released OR expression into equivalent individual comparisons to encourage two explicit true-return loads. This changed broader control flow and regressed sharply.

### Attempt 3 notes

Added a zero-instruction result-register annotation inside the short-circuit expression. The compiler materialized an extra boolean path and produced 256 bytes.

### Attempt 4 notes

Replaced the output annotation with a register clobber to preserve source semantics. Old EE GCC generated the same 256-byte boolean-materialization path.

### Attempt 5 notes

Returned to the exact released short-circuit body as a distinct final candidate. It reproduced the 240-byte, 86.0656% byte and 81.9672% instruction near match from attempt 1.

## Outcome

The exact released has_nonuniform_scaling body and four faithful control-flow variants exhausted the five-attempt bound. The exact-body candidates matched the first 50 instructions and reached 86.0656% byte identity, but old EE GCC emitted a four-byte-short short-circuit return and loop-back schedule.
