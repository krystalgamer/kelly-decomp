# _nglDmaSetWaitGif__Fv

- Address: `0x003AC748`
- Size: `0x30` (48 bytes)
- Object: `ngl/ngl_dma`
- Debug source: `C:/NGL/ps2/ngl_dma.cpp`
- Reference source: `NGL/PS2/ngl_dma.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released DMA PCR bitfield assignments use the shared NGL DMA declaration.
The pointer alias preserves the target's HI16 relocation carry.

## Outcome

The local PCR layout was removed; the released setup remains exact.
