# __16light_properties

- Address: `0x002CC8B0`
- Size: `0xB8` (184 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/light.cpp`
- Reference source: `KS/SRC/light.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The exact released default constructor matched on the first attempt using new reusable source-faithful `color` and `light_properties` declarations, including the original range recomputation constants and field order.

## Outcome

Matched the released light-properties constructor with shared color and light declarations.
