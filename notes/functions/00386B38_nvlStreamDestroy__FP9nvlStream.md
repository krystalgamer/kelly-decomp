# nvlStreamDestroy__FP9nvlStream

- Address: `0x00386B38`
- Size: `0x210` (528 bytes)
- Object: `nvl/nvlstream_ps2`
- Debug source: `C:/NVL/ps2/nvlstream_ps2.cpp`
- Reference source: `NVL/PS2/nvlstream_ps2.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 19.5076 | 4.5455 | `candidate.cpp` |

### Attempt 1 notes

FIRST PASS wave102 A3
Target: 0x00386B38 nvlStreamDestroy__FP9nvlStream (528/0x210), NVL/PS2/nvlstream_ps2.cpp
Attempts before: 0
Attempt 1: exact released nvlStreamDestroy body with minimal self-contained declarations and LF line endings
Result: different; byte score 19.5076; instruction score 4.5455; candidate size 516; target size 528
Exactly one candidate was tested. No retry, diff chase, build, finalization, integration, queue edit, tracked edit, commit, or push.

## Outcome

The exact released NVL stream destruction body differed at 19.5076% byte score; no source variant was attempted.
