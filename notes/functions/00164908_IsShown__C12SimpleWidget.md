# IsShown__C12SimpleWidget

- Address: `0x00164908`
- Size: `0x44` (68 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/igo_widget_simple.cpp`
- Reference source: `KS/SRC/ks/igo_widget_simple.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 97.0588 | 88.2353 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Used the released body and member offsets, but placed IsOn one virtual slot too late in the abbreviated PanelQuad declaration.

### Attempt 2 notes

Restored the released IsOn vtable position; the body matched exactly.

## Outcome

The exact released visibility test matches with the released PanelQuad IsOn virtual position.
