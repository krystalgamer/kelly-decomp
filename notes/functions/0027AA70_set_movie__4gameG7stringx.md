# set_movie__4gameG7stringx

- Address: `0x0027AA70`
- Size: `0x34` (52 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/game.cpp`
- Reference source: `KS/SRC/game.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 59.6154 | 53.8462 | `candidate.cpp` |
| 2 | different | 59.6154 | 53.8462 | `candidate.cpp` |
| 3 | different | 59.6154 | 53.8462 | `candidate.cpp` |

### Attempt 1 notes

Used the released by-value string assignment with the real stringx layout. EE GCC tail-jumped to the implicit parameter destructor after restoring the frame, producing 48 bytes.

### Attempt 2 notes

Added an empty barrier after the source-level assignment. Because the by-value parameter destructor is compiler-generated after the body, EE GCC still tail-jumped to it and emitted the same 48-byte sequence.

### Attempt 3 notes

All native by-value forms tail-jump to the generated string destructor and emit
48 bytes.

## Outcome

The prior exact ABI wrapper used a compiler barrier and manual member offset.
Those matching-only constructs were removed and the setter was deferred.
