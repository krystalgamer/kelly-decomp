# Clear__10MenuRender

- Address: `0x002408B0`
- Size: `0x2C` (44 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/menusys.cpp`
- Reference source: `KS/SRC/ks/menusys.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 13.6364 | 0.0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `size44-replay-menu-core.cpp` |

### Attempt 1 notes

The first faithful source shape exposed an isolated scheduling, layout, or sibling-call mismatch.

### Attempt 2 notes

The released clear forwards the four unsigned-short menu bounds.

### Attempt 3 notes

A local function pointer preserves the normal call frame without a compiler
barrier, using the shared `MenuRender` layout.

## Outcome

The compiler barrier and local class were removed.
