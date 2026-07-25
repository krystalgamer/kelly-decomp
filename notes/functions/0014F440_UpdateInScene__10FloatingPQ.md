# UpdateInScene__10FloatingPQ

- Address: `0x0014F440`
- Size: `0xB4` (180 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEPanel.cpp`
- Reference source: `KS/SRC/ks/FEPanel.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 2 | different | 93.8889 | 88.8889 | `candidate.cpp` |
| 3 | different | 94.4444 | 91.1111 | `candidate.cpp` |
| 4 | different | 95.5556 | 95.5556 | `candidate.cpp` |
| 5 | different | 95.5556 | 95.5556 | `candidate.cpp` |

### Attempt 1 notes

The exact released body initially exposed duplicate legacy nglVector and PanelQuad declarations while moving the NGL, geometry-manager, and frontend types into shared context.

### Attempt 2 notes

With source-faithful shared NGL and geometry-manager declarations, the released body matched except for PanelQuad size, the SetScale virtual slot, and two unadjustCoords argument-address instructions.

### Attempt 3 notes

Correcting the shared PanelQuad object size restored the inherited vptr offset, leaving one missing virtual slot and the independent unadjustCoords schedule.

### Attempt 4 notes

The complete target PanelQuad virtual order, including the target-evidenced SetAlpha slot absent from the released header snapshot, reproduced every instruction except the two argument-address placements.

### Attempt 5 notes

Binding the released second coordinate reference did not alter those final two scheduled instructions. No local class layout or manual vtable surrogate was retained.

## Outcome

Deferred FloatingPQ scene updating after five source-level attempts; shared released declarations reproduced all but two independent argument-address scheduling instructions.
