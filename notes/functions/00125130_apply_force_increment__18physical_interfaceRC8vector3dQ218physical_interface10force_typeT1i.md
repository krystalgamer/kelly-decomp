# apply_force_increment__18physical_interfaceRC8vector3dQ218physical_interface10force_typeT1i

- Address: `0x00125130`
- Size: `0xF4` (244 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/physical_interface.cpp`
- Reference source: `KS/SRC/physical_interface.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 2 | matched | 100.0 | 98.3871 | `candidate.cpp` |
| 3 | matched | 100.0 | 98.3871 | `candidate.cpp` |
| 4 | matched | 100.0 | 100.0 | `candidate.cpp` |
| 5 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

Attempt 1 used the exact released body but omitted the directly required vector3d operator+ declaration and did not compile. Attempt 2 added that authentic declaration; it matched all 244 target bytes.

### Attempt 5 notes

Attempts 1-2 are the inherited isolated attempts. Attempts 2 and 3 had a 98.3871% relocation-aware instruction score and failed integration because packet qualification counted 62 instructions while 61 matched. Attempts 4 and 5 reached a 100% instruction score, with the final source and shared proposal unchanged.

## Outcome

Exact released physical_interface::apply_force_increment matched at 244/244 bytes and 61/61 instructions using a complete reusable source-faithful physical interface shared header.
