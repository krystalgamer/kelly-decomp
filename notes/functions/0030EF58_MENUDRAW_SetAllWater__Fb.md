# MENUDRAW_SetAllWater__Fb

- Address: `0x0030EF58`
- Size: `0x34` (52 bytes)
- Object: `game/files_misfits`
- Debug source: `C:/KS/SRC/menudraw.cpp`
- Reference source: `KS/SRC/menudraw.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 84.6154 | 53.8462 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Used the released four-element loop with the recovered WaterFlags address. Every operation matched, but EE GCC moved the array-pointer increment before the two loop nops instead of retaining it in the branch delay slot.

### Attempt 2 notes

The released operation writes the requested state to all four water-debug flags. Instruction-emitting inline assembly is limited to this exact loop because EE GCC otherwise moves the array-pointer increment out of the target backedge delay slot; `.set noreorder` preserves precisely the target schedule.

## Outcome

The released all-water debug toggle matched exactly.
