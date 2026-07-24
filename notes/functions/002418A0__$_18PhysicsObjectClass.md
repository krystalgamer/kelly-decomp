# _$_18PhysicsObjectClass

- Address: `0x002418A0`
- Size: `0x70` (112 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/physics.cpp`
- Reference source: `KS/SRC/ks/physics.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Read the released PhysicsObjectClass destructor and exact RungeKutta/OdeSolver inheritance and member offset. The source-faithful generated destructor matched on attempt 1.

## Outcome

Matched physics object destructor
