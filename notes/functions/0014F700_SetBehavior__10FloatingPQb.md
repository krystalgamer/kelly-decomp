# SetBehavior__10FloatingPQb

- Address: `0x0014F700`
- Size: `0x30` (48 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEPanel.cpp`
- Reference source: `KS/SRC/ks/FEPanel.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `size48-frontend-core.cpp` |

### Attempt 1 notes

The released setter stores the word-sized behavior flag at 0x1e0 and conditionally forwards the saved rectangle to base `PanelQuad::SetPos`. The trailing barrier preserves the normal call frame.

### Attempt 2 notes

The shared floating-panel declaration and a local function pointer preserve
the conditional normal call without a compiler barrier.

## Outcome

The local layout and compiler barrier were removed.
