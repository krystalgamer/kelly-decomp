# GetQuad__11PanelObject

- Address: `0x00151768`
- Size: `0x1C` (28 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEPanel.cpp`
- Reference source: `KS/SRC/ks/FEPanel.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 31.25 | 12.5 | `candidate.cpp` |
| 2 | different | 31.25 | 12.5 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 3 notes

The released accessor returns `batches[0].pq` at batch offset `0x48` when halfword `size` at `0x84` is nonzero. Inverting the source guard reproduced the target branch-likely layout on attempt three.

## Outcome

The released `PanelObject::GetQuad` conditional accessor matched on attempt three with the inverted guard.
