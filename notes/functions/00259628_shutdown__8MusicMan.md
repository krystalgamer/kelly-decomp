# shutdown__8MusicMan

- Address: `0x00259628`
- Size: `0x2C` (44 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/MusicMan.cpp`
- Reference source: `KS/SRC/ks/MusicMan.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 59.0909 | 45.4545 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `size44-replay-menu-core.cpp` |

### Attempt 1 notes

The first faithful source shape exposed an isolated scheduling, layout, or sibling-call mismatch.

### Attempt 2 notes

The released shutdown stops playback before shutting down the embedded listing at 0x10.

### Attempt 3 notes

A local function pointer preserves the second normal call without a compiler
barrier, using the shared music declarations.

## Outcome

The compiler barrier and local layouts were removed.
