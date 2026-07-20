# open__5stashPCc

- Address: `0x00347CE0`
- Size: `0x34` (52 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/mustash.cpp`
- Reference source: `KS/SRC/mustash.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released local pstring construction (inlined as pack_string) and pstring overload call matched exactly with the recovered 0x20-byte pstring layout.

## Outcome

The released stash C-string open wrapper matched exactly on the first attempt.
