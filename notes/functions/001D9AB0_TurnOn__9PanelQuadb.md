# TurnOn__9PanelQuadb

- Address: `0x001D9AB0`
- Size: `0x8` (8 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEPanel.h`
- Reference source: `KS/SRC/ks/FEPanel.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released inline body assigns `drawOn = on`; EE GCC stores the bool as a word at offset `0x80`.

## Outcome

The released `PanelQuad::TurnOn` bool setter at offset `0x80` matched exactly on the first attempt.
