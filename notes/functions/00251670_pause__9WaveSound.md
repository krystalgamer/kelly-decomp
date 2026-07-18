# pause__9WaveSound

- Address: `0x00251670`
- Size: `0xC` (12 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/wavesound.cpp`
- Reference source: `KS/SRC/ks/wavesound.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released method sets the word-sized `is_paused` flag at offset `0x498`.

## Outcome

The released `WaveSound::pause` flag set matched exactly on the first attempt.
