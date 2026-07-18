# Reset__15CompressedPhoto

- Address: `0x00262A38`
- Size: `0x10` (16 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/compressedphoto.cpp`
- Reference source: `KS/SRC/ks/compressedphoto.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released reset assigns compressed size `0x2000` at offset `0x2000` and clears `valid` at `0x2004`.

## Outcome

The released `CompressedPhoto::Reset` assignments matched exactly on the first attempt.
