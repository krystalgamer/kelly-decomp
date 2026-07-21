# mpegTS__FP7sceMpegP22sceMpegCbDataTimeStampPv

- Address: `0x00388F88`
- Size: `0x44` (68 bytes)
- Object: `nvl/nvlMPEG_ps2`
- Debug source: `C:/NVL/ps2/nvlMPEG_ps2.cpp`
- Reference source: `NVL/PS2/nvlMPEG_ps2.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 97.0588 | 88.2353 | `candidate.cpp` |
| 2 | different | 97.0588 | 88.2353 | `candidate.cpp` |
| 3 | different | 97.0588 | 88.2353 | `candidate.cpp` |
| 4 | different | 97.0588 | 88.2353 | `candidate.cpp` |
| 5 | different | 97.0588 | 88.2353 | `candidate.cpp` |

### Attempt 1 notes

Used the exact released callback body, TimeStamp layout, callback layout, and global ViBuf alias; only the two local 64-bit loads differed as lq versus target ld.

### Attempt 2 notes

Made the released TimeStamp local volatile; GCC retained the same widened loads.

### Attempt 3 notes

Staged pts and dts as separate long locals; optimization folded them back to widened loads.

### Attempt 4 notes

Tested the SDK layout as packed to constrain aggregate access; emitted loads remained widened.

### Attempt 5 notes

Used explicit volatile long field reads; GCC still selected lq for both accesses.

## Outcome

All five source forms reproduced 66 of 68 bytes, but none expressed the target ld selection without instruction-forcing assembly; deferred under source-only rules.
