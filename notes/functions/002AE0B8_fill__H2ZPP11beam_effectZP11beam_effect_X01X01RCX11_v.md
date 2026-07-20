# fill__H2ZPP11beam_effectZP11beam_effect_X01X01RCX11_v

- Address: `0x002AE0B8`
- Size: `0x34` (52 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_algobase.h`
- Reference source: ``
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 48.0769 | 20.0 | `shape-1.cpp` |
| 2 | different | 48.0769 | 20.0 | `shape-2.cpp` |
| 3 | different | 48.0769 | 20.0 | `shape-3.cpp` |
| 4 | different | 50.0 | 20.0 | `shape-4.cpp` |
| 5 | different | 50.0 | 20.0 | `shape-5.cpp` |

### Attempt 1 notes

The canonical pointer range-fill loop emitted a 44-byte loop that reloads the value at the loop head rather than using the target preload and branch-likely delay-slot reload.

### Attempt 2 notes

The equivalent post-increment spelling emitted the same 44-byte loop and retained the target scheduling mismatch.

### Attempt 3 notes

A volatile referenced value did not alter this legacy compiler's 44-byte loop or reproduce the target preload/branch-likely schedule.

### Attempt 4 notes

An explicit preload/goto loop with the target three nops caused the compiler to prove the value invariant and emit an unconditional backedge to the entry check.

### Attempt 5 notes

Adding a memory clobber to the explicit three-nop block did not restore the target branch-likely value reload.

## Outcome

Five canonical and scheduling-directed range-fill candidates could not reproduce the target preload and branch-likely value reload.
