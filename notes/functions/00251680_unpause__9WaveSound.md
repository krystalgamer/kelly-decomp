# unpause__9WaveSound

- Address: `0x00251680`
- Size: `0x8` (8 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/wavesound.cpp`
- Reference source: `KS/SRC/ks/wavesound.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released method clears the word-sized `is_paused` flag at offset `0x498`.

## Outcome

The released `WaveSound::unpause` flag clear matched exactly on the first attempt.
