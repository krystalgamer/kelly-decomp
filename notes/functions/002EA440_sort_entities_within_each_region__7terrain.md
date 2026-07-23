# sort_entities_within_each_region__7terrain

- Address: `0x002EA440`
- Size: `0x58` (88 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/terrain.cpp`
- Reference source: `KS/SRC/terrain.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 61.3636 | 89.4737 | `candidate.cpp` |
| 2 | different | 43.1818 | 36.8421 | `candidate.cpp` |
| 3 | different | 61.3636 | 89.4737 | `candidate.cpp` |
| 4 | different | 61.3636 | 89.4737 | `candidate.cpp` |
| 5 | different | 61.3636 | 89.4737 | `candidate.cpp` |

### Attempt 1 notes

Used the exact released terrain region loop and sort_entities helper. The compiler omitted three target post-call scheduler nops, producing 76 bytes.

### Attempt 2 notes

Added a non-emitting boundary after each call. The compiler shortened/restructured the loop instead of retaining nops.

### Attempt 3 notes

Used a while loop with an explicit region local. The original 76-byte form returned.

### Attempt 4 notes

Called sort_entities through an extern-C alias. Code generation was unchanged.

### Attempt 5 notes

Used a register-qualified for-loop iterator through the same alias. The target call-latency nops remained absent.

## Outcome

Released terrain region sorting loop remained blocked by three post-call scheduler nops after five source-level attempts.
