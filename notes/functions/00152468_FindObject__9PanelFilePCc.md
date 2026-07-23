# FindObject__9PanelFilePCc

- Address: `0x00152468`
- Size: `0x58` (88 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEPanel.cpp`
- Reference source: `KS/SRC/ks/FEPanel.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Read the exact released PanelFile char-name overload, stringx constructor/destructor, PanelFile vptr offset, and virtual stringx overload slot. It matched byte-exactly.

## Outcome

Matched released PanelFile char object lookup
