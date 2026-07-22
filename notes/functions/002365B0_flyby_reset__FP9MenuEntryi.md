# flyby_reset__FP9MenuEntryi

- Address: `0x002365B0`
- Size: `0x50` (80 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/ksdbmenu.cpp`
- Reference source: `KS/SRC/ks/ksdbmenu.cpp`
- Result: **sol_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 29.7619 | 19.0476 | `candidate.cpp` |
| 2 | different | 29.7619 | 19.0476 | `candidate.cpp` |
| 3 | different | 68.75 | 65.0 | `candidate.cpp` |

### Attempt 1 notes

Initial candidate modeled flyby flags and StartFlyby(menu->controller) but unsigned masking generated a 84-byte function with an expanded mask and different scheduling.

### Attempt 2 notes

Changed the immutable bitfield operation to signed `&= -17`; the legacy compiler still materialized a 32-bit mask and retained different global-load scheduling.

### Attempt 3 notes

Changed the flags declaration to signed int, yielding the target addiu -17 mask and an 80-byte body, but register allocation and load order differed from the immutable target. Exactly three Luna attempts exhausted; no attempt 4.

## Outcome

Luna attempts 1-3 reproduced flyby_reset behavior, including flag clear/set and StartFlyby dispatch, but the candidate's register allocation and global-load ordering differed from the immutable target. No fourth attempt was run.
