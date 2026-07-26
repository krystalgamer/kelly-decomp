# Select__13CheatFrontEndi

- Address: `0x001D1600`
- Size: `0xC0` (192 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/CheatFrontEnd.cpp`
- Reference source: `KS/SRC/ks/CheatFrontEnd.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 13.5417 | 0.0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released repository body omitted the target's shared select sound event,
leaving a 152-byte function.

### Attempt 2 notes

Restoring the target's common `SS_FE_ONX` event before the switch matched the
active-menu dispatch and submenu selection exactly.

## Outcome

Matched cheat menu selection with active-menu dispatch, sound event, and submenu activation.
