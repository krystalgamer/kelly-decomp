# WATER_Normal__FffRfN22

- Address: `0x0036EE90`
- Size: `0x18` (24 bytes)
- Object: `game/files_wave`
- Debug source: `C:/KS/SRC/ks/water.cpp`
- Reference source: `KS/SRC/ks/water.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | symbol_missing | 0.0 | 0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

The target helper writes `(0, 1, 0)` to three output references. The isolated compiler spelled repeated references as `T2T2`; an asm label preserves the target's equivalent `N22` spelling on attempt two.

## Outcome

The target `WATER_Normal` output stores matched on attempt two with a documented repeated-reference asm label.
