# free_stored__10multistash

- Address: `0x00346FF0`
- Size: `0xF4` (244 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/mustash.cpp`
- Reference source: `KS/SRC/mustash.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 10.2459 | 0.0 | `candidate.cpp` |
| 2 | different | 10.2459 | 0.0 | `candidate.cpp` |
| 3 | different | 28.2787 | 6.5574 | `candidate.cpp` |
| 4 | different | 68.8525 | 55.7377 | `candidate.cpp` |
| 5 | compile_failed | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

Exact released body with source-faithful multistash, AvlTree, node, entry, and header declarations. Initial layout was four bytes late and delete expressions called out-of-line destructors.

### Attempt 2 notes

Corrected header and AvlTree offsets to the released 0x284 and 0x2CC positions. Old EE GCC still emitted the entry and node destructors out of line.

### Attempt 3 notes

Expanded the source-level root disposal semantics while keeping recursive AvlTree dump calls shared. The result was 236 bytes but retained an extra saved register and different deletion scheduling.

### Attempt 4 notes

Reloaded the root around recursive calls and kept memset non-tail. This matched most of the released structure at 240 bytes and 68.8525% byte identity; only the compiler-generated null guard before root deletion was absent.

### Attempt 5 notes

Attempted a zero-instruction read/write annotation to retain the missing root null guard. The old compiler rejected that annotation inside the template instantiation, so the final attempt failed to compile.

## Outcome

The exact released multistash body and four source-faithful AvlTree cleanup variants exhausted the attempt limit. The strongest candidate reproduced most of the released 244-byte structure but remained four bytes short because old EE GCC optimized away the root null guard; the final guard-preservation annotation was rejected by this compiler.
