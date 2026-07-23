# Play__5Track

- Address: `0x002585E8`
- Size: `0x54` (84 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/MusicMan.cpp`
- Reference source: `KS/SRC/ks/MusicMan.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Read the exact released Track::Play body, Track fields, NSL identifier types, invalid-id value, IsPlaying helper, and nslAddSound/nslPlaySound declarations. Bound the exact helper addresses and reproduced the body byte-exactly.

## Outcome

Matched released Track::Play body
