# Draw__9PanelTextf

- Address: `0x001521F0`
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

`PanelText::Draw` is intentionally empty in the released source. The
float-parameter virtual method matched on the first candidate.

## Outcome

PanelText::Draw is intentionally empty in the released source. The first float-parameter candidate matched exactly and preserved the byte-identical integrated ROM.
