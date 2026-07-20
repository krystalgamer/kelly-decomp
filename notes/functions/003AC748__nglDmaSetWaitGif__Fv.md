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

The released DMA PCR bitfield assignments matched exactly. The pointer alias uses `0x004BF488` so isolated absolute assembly reproduces the target's HI16 relocation carry while the signed LO16 addresses the real `0x004AF488` global.

## Outcome

The released NGL DMA GIF-wait PCR setup matched exactly on the first attempt.
