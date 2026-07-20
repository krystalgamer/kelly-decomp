# scTag2__FP5QWORDPvUiUi

- Address: `0x00389ED8`
- Size: `0x24` (36 bytes)
- Object: `nvl/nvlMPEG_ps2`
- Debug source: `C:/NVL/ps2/nvlMPEG_ps2.cpp`
- Reference source: `NVL/PS2/nvlMPEG_ps2.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released helper packs the address, QWC, and id fields into the first 64-bit DMA tag word.

## Outcome

The released `scTag2` bit-packing helper matched exactly.
