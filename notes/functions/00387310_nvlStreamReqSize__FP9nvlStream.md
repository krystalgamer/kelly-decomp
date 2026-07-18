# nvlStreamReqSize__FP9nvlStream

- Address: `0x00387310`
- Size: `0xC` (12 bytes)
- Object: `nvl/nvlstream_ps2`
- Debug source: `C:/NVL/ps2/nvlstream_ps2.cpp`
- Reference source: `NVL/PS2/nvlstream_ps2.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released accessor loads `bufsize` at offset `0x18` and returns its arithmetic quarter.

## Outcome

The released `nvlStreamReqSize` load-and-shift matched exactly on the first attempt.
