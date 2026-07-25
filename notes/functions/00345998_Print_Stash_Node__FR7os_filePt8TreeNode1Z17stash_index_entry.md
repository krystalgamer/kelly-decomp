# Print_Stash_Node__FR7os_filePt8TreeNode1Z17stash_index_entry

- Address: `0x00345998`
- Size: `0xB4` (180 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/mustash.cpp`
- Reference source: `KS/SRC/mustash.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 2 | different | 77.6042 | 75.0 | `candidate.cpp` |
| 3 | different | 95.0 | 100.0 | `candidate.cpp` |
| 4 | different | 96.6667 | 100.0 | `candidate.cpp` |
| 5 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 5 notes

The released recursive body matches after reusing shared source-faithful `pstring`, `TreeNode<T>`, and `stash_index_entry` declarations. The newline and recursive call aliases preserve linked addresses in isolated compilation; `KELLY_DECOMP_COMPILER_BARRIER()` prevents only the otherwise introduced sibling-call optimization and emits no target instruction.

## Outcome

Matched the released recursive stash-node printer with shared packed-string, AVL-node, and stash-index declarations.
