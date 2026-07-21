# ReloadPanel__15FEGraphicalMenu

- Address: `0x001DB348`
- Size: `0x44` (68 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEMenu.h`
- Reference source: `KS/SRC/ks/FEMenu.h`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | symbol_missing | 0.0 | 0 | `candidate.cpp` |
| 2 | different | 8.8235 | 0.0 | `candidate.cpp` |
| 3 | different | 29.4118 | 17.6471 | `candidate.cpp` |
| 4 | different | 29.4118 | 17.6471 | `candidate.cpp` |
| 5 | compile_failed | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

Used the exact released inline body without forcing emission; no standalone symbol was produced.

### Attempt 2 notes

Moved the released body out of line, but omitting its virtual base layout turned the parent call into direct recursion.

### Attempt 3 notes

Restored the released base/derived layout and exact virtual slot; call targets and offsets matched, but GCC tail-reordered the branches.

### Attempt 4 notes

Reversed the source branch after inspecting the diff; GCC retained the same tail-merged layout.

### Attempt 5 notes

Tested a narrow empty barrier for the demonstrated tail merge, but this isolated spelling was rejected by the legacy compiler.

## Outcome

Deferred after five source-level attempts; the released virtual dispatch and offsets are reconstructed, but the isolated compiler consistently tail-merges the opposite branch layout.
