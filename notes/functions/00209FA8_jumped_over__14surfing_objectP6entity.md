# jumped_over__14surfing_objectP6entity

- Address: `0x00209FA8`
- Size: `0x48` (72 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/floatobj.cpp`
- Reference source: `KS/SRC/ks/floatobj.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 15.2778 | 5.5556 | `candidate.cpp` |
| 2 | different | 98.6111 | 94.4444 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |
| 4 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Attempt 1 used the exact released body and shared released generic_anim/surfing_object declarations; it reproduced the callback but lacked a target-era active-state write.

### Attempt 2 notes

Attempt 2 added the target-era active assignment, revealing that the released snapshot member layout places active twelve bytes earlier than the target build.

### Attempt 3 notes

Attempt 3 used the inferred target active offset and matched exactly.

### Attempt 4 notes

Attempt 4 moved that inferred offset into the shared declaration helper so the selector body no longer carries an independent layout shim; it remained exact.

## Outcome

The jump callback matches with shared target-era active layout and released animation dispatch.
