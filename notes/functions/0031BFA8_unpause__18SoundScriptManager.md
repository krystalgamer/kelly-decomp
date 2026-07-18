# unpause__18SoundScriptManager

- Address: `0x0031BFA8`
- Size: `0x8` (8 bytes)
- Object: `game/files_script`
- Debug source: `ks/SoundScript.cpp`
- Reference source: `KS/SRC/ks/SoundScript.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released method clears the word-sized `paused` flag at offset `0x45B8`.

## Outcome

The released `SoundScriptManager::unpause` flag clear matched exactly on the first attempt.
