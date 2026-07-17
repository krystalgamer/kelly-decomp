# SetClip__9PanelQuadb

- Address: `0x0014DEC8`
- Size: `0x8` (8 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEPanel.cpp`
- Reference source: `KS/SRC/ks/FEPanel.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The `clip` flag is stored at `PanelQuad` offset `0x114`. EE GCC represents
the member bool as a word here, matching the target `sw`.

## Outcome

The PanelQuad clip flag is stored at offset 0x114, with EE GCC representing the member bool as a word. The first candidate matched exactly and preserved the byte-identical ROM.
