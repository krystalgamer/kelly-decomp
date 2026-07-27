# TRAIL_StaticInit__Fv

- Address: `0x00361848`
- Size: `0x108` (264 bytes)
- Object: `game/files_wave`
- Debug source: `C:/KS/SRC/ks/trail.cpp`
- Reference source: `KS/SRC/ks/trail.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 73.1061 | 59.0909 | `candidate.cpp` |

### Attempt 1 notes

Exact released TRAIL_StaticInit definition from KS/SRC/ks/trail.cpp with only the trail layout, allocation/constructor declarations, and global symbol aliases needed for a self-contained candidate. The first and only test was different: 73.1061% byte score and 59.0909% instruction score.

## Outcome

The exact released trail static initializer differed from the target; the sole attempt scored 73.1061%.
