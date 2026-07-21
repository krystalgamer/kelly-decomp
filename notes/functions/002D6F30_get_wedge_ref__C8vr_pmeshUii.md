# get_wedge_ref__C8vr_pmeshUii

- Address: `0x002D6F30`
- Size: `0x44` (68 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/pmesh.cpp`
- Reference source: `KS/SRC/pmesh.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 44.1176 | 23.5294 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

Attempt one used the exact released condition. Expressing the equivalent compact-mesh case first after inspecting the diff reproduces the target fallthrough and matches exactly.

## Outcome

The released progressive and compact mesh wedge lookup matches exactly.
