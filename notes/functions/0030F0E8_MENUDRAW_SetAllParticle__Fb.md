# MENUDRAW_SetAllParticle__Fb

- Address: `0x0030F0E8`
- Size: `0x34` (52 bytes)
- Object: `game/files_misfits`
- Debug source: `C:/KS/SRC/menudraw.cpp`
- Reference source: `KS/SRC/menudraw.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released operation writes the requested state to all eight particle-debug flags. Instruction-emitting inline assembly is limited to this exact loop because the established EE GCC expansion otherwise moves the array-pointer increment out of the target backedge delay slot; `.set noreorder` preserves precisely that schedule.

## Outcome

The released all-particle debug toggle matched exactly on the first attempt.
