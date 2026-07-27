# pressDir__18AISurferControllerif

- Address: `0x00103FB8`
- Size: `0xF8` (248 bytes)
- Object: `game/files_ai`
- Debug source: `C:/KS/SRC/AIController.cpp`
- Reference source: `KS/SRC/AIController.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 40.7258 | 33.871 | `candidate.cpp` |

### Attempt 1 notes

Exact released `AISurferController::pressDir` switch with the authentic controller layout and pad constants. Direct axis stores match, but EE GCC converted the diagonal cases' second recursive calls into loops back through the switch, producing 196 bytes instead of the target's retained recursive-call form.

## Outcome

Exact released directional switch differed through recursive tail-call elimination.
