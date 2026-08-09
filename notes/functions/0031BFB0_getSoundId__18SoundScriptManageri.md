# getSoundId__18SoundScriptManageri

- Address: `0x0031BFB0`
- Size: `0x30` (48 bytes)
- Object: `game/files_script`
- Debug source: `ks/SoundScript.cpp`
- Reference source: `KS/SRC/ks/SoundScript.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 77.0833 | 66.6667 | `candidate.cpp` |
| 2 | different | 60.4167 | 41.6667 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 3 notes

The explicit invalid label and shared `SoundScriptManager` event layout preserve
the target branch and indexed record reuse.

## Outcome

The local 0x3ac4-byte stand-in was removed; the released manager declaration
still matches exactly.
