# OnButtonRelease__16TutorialFrontEndii

- Address: `0x001D0D18`
- Size: `0xD4` (212 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/TutorialFrontEnd.cpp`
- Reference source: `KS/SRC/ks/TutorialFrontEnd.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 15.0943 | 1.8868 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |
| 3 | matched | 100.0 | 98.1481 | `candidate.cpp` |
| 4 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released snapshot body omitted two shipped guards: the pause-menu drawing state and the start-button release path. It also hid the wave indicator unconditionally.

### Attempt 2 notes

Recovered the shipped pause-menu drawing guard, start-button release handling, and wave-indicator-type check around the exact released continuation flow. This matched byte-exactly.

### Attempt 3 notes

Moved the recovered IGO tutorial, pause-menu, manager, wave-indicator, and TutorialFrontEnd declarations into one narrow shared source-faithful header. The integrated-context candidate remained byte-exact.

### Attempt 4 notes

Marked the shared virtual declaration as an interface so the selector object does not emit unrelated frontend vtables. The isolated function remained byte-exact.

## Outcome

Matched the shipped tutorial release flow, including the pause-menu drawing guard, start-button release handling, wave-indicator-type check, and exact continuation calls, using one narrow shared header.
