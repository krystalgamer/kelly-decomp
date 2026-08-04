# SetColor__9PanelQuadG5color

- Address: `0x001D9B00`
- Size: `0x24` (36 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEPanel.h`
- Reference source: `KS/SRC/ks/FEPanel.h`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 50.0 | 11.1111 | `size36-panel-color-1.cpp` |
| 2 | different | 52.7778 | 22.2222 | `size36-panel-color-2.cpp` |
| 3 | different | 77.7778 | 11.1111 | `size36-panel-color-3.cpp` |

### Attempt 1 notes

The exact released red/green/blue/alpha assignments interleave each load and store instead of the target's grouped schedule.

### Attempt 2 notes

Assigning alpha first preserves the target field order but still interleaves loads and stores.

### Attempt 3 notes

Copying all four components to locals groups the operations, but EE GCC chooses blue/alpha/red/green rather than the target alpha/red/green/blue order.

## Outcome

The non-released inline-assembly implementation was removed and the original target function was deferred.
