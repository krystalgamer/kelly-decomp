# set_active__7triggerb

- Address: `0x0028DD00`
- Size: `0x4C` (76 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/trigger.cpp`
- Reference source: `KS/SRC/trigger.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

## Attempt notes

Used the retained immutable `trigger.cpp:214-221` body and reused the shared
released trigger/signaller hierarchy created for `update_regions`.

## Outcome

Matched active-state assignment, LEAVE signaling, and occupancy clearing
byte-for-byte.
