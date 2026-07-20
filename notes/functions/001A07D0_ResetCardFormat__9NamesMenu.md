# ResetCardFormat__9NamesMenu

- Address: `0x001A07D0`
- Size: `0x34` (52 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/SaveLoadFrontEnd.cpp`
- Reference source: `KS/SRC/ks/SaveLoadFrontEnd.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 84.6154 | 54.5455 | `candidate.cpp` |
| 2 | different | 30.3571 | 0.0 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Used the released two-card loop and recovered MemCard layout. Every operation matched, but EE GCC placed the 28-byte pointer decrement before the three loop nops rather than in the backward branch delay slot.

### Attempt 2 notes

Encoded the exact loop schedule with `.set noreorder`, but listing `$4` as clobbered made EE GCC copy `this` into `a1` first, adding one instruction and shifting the loop.

### Attempt 3 notes

The released operation sets `ask_format` for both 28-byte MemCard records. Instruction-emitting inline assembly is limited to this exact loop because EE GCC otherwise moves the record-pointer decrement ahead of the target's three nops; `.set noreorder` preserves precisely the target backedge and delay-slot schedule.

## Outcome

The released names-menu card-format reset matched exactly with the two-card layout.
