# __9ImageDXTC

- Address: `0x00263B18`
- Size: `0x10` (16 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/dxt1_imagedxt1.cpp`
- Reference source: `KS/SRC/ks/dxt1_imagedxt1.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released constructor clears `XSize` and `YSize` at offsets `0x0` and `0x4`, then returns `this`.

## Outcome

The released `ImageDXTC` constructor matched exactly on the first attempt.
