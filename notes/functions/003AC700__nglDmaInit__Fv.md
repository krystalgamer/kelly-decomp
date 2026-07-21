# _nglDmaInit__Fv

- Address: `0x003AC700`
- Size: `0x44` (68 bytes)
- Object: `ngl/ngl_dma`
- Debug source: `C:/NGL/ps2/ngl_dma.cpp`
- Reference source: `NGL/PS2/ngl_dma.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 25.0 | 5.8824 | `candidate.cpp` |
| 2 | different | 88.2353 | 88.2353 | `candidate.cpp` |
| 3 | different | 88.2353 | 88.2353 | `candidate.cpp` |
| 4 | different | 66.1765 | 47.0588 | `candidate.cpp` |
| 5 | different | 88.2353 | 88.2353 | `candidate.cpp` |

### Attempt 1 notes

Used the exact released printf call, hardware register constants, format string, and declarations; GCC tail-called nglPrintf and omitted the target frame.

### Attempt 2 notes

Added a demonstrated post-call empty barrier to preserve the normal call; only one independent load/ORI scheduling pair differed.

### Attempt 3 notes

Staged the CTRL register value before the released call; scheduling remained unchanged.

### Attempt 4 notes

Tested a barrier after the CTRL read to constrain movement; it overconstrained scheduling and reduced the score.

### Attempt 5 notes

Staged all three volatile hardware register reads before the call; GCC returned to the same two-instruction scheduling difference.

## Outcome

Five source-only variants could not reproduce the target volatile-load scheduling without instruction-forcing assembly; deferred.
