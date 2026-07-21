# getButtonPressed__Fi

- Address: `0x00158F80`
- Size: `0x48` (72 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEMenu.cpp`
- Reference source: `KS/SRC/ks/FEMenu.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 52.7778 | 44.4444 | `candidate.cpp` |
| 2 | different | 47.2222 | 38.8889 | `candidate.cpp` |
| 3 | different | 52.7778 | 44.4444 | `candidate.cpp` |
| 4 | different | 44.4444 | 38.8889 | `candidate.cpp` |
| 5 | different | 52.7778 | 44.4444 | `candidate.cpp` |

### Attempt 1 notes

Used the exact released body plus input_mgr singleton, device enum, rational_t, and AXIS_MAX declarations; the singleton alias initially lacked the linker carry.

### Attempt 2 notes

Corrected the singleton alias, staged the state and constant, and inverted the equivalent branch to match target fallthrough; one FPU scheduling nop remained absent.

### Attempt 3 notes

Retested the exact released if/return spelling with the corrected alias.

### Attempt 4 notes

Restored the singleton as an authentic class static member and used a conditional return form.

### Attempt 5 notes

Restored the exact rational_t typedef and AXIS_MAX const declaration; GCC still omitted the target FPU hazard nop and chose different initial scheduling.

## Outcome

Five source-faithful forms could not reproduce the target FPU scheduling without instruction-emitting assembly; deferred.
