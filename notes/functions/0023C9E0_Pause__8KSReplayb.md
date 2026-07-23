# Pause__8KSReplayb

- Address: `0x0023C9E0`
- Size: `0x58` (88 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/ksreplay.cpp`
- Reference source: `KS/SRC/ks/ksreplay.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Read the exact released KSReplay::Pause body and replay status enum values. The nested record/playback/ignore/paused transitions matched byte-exactly.

## Outcome

Matched released KSReplay pause transitions
