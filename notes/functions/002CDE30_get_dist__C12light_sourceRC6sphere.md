# get_dist__C12light_sourceRC6sphere

- Address: `0x002CDE30`
- Size: `0xB8` (184 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/light.cpp`
- Reference source: `KS/SRC/light.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 22.3404 | 2.1277 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

The released sphere-distance body matched using shared source-faithful sphere/vector, PO position, entity position, light-source, and light-properties declarations. Expressing the enum inequality as its equivalent XOR form reproduced the shipped old-GCC condition without changing behavior.

## Outcome

Matched the released light-to-sphere distance calculation with shared geometry and entity declarations.
