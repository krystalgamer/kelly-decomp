# pcmCallback__FP7sceMpegP16sceMpegCbDataStrPv

- Address: `0x00387740`
- Size: `0xD4` (212 bytes)
- Object: `nvl/nvlMPEG_ps2`
- Debug source: `C:/NVL/ps2/nvlMPEG_ps2.cpp`
- Reference source: `NVL/PS2/nvlMPEG_ps2.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 85.3774 | 73.5849 | `candidate.cpp` |
| 2 | different | 38.4259 | 22.2222 | `candidate.cpp` |
| 3 | different | 38.4259 | 22.2222 | `candidate.cpp` |
| 4 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 5 | different | 86.7925 | 79.2453 | `candidate.cpp` |

### Attempt 1 notes

The exact released ring-buffer callback used the wrong recovered ReadBuf size offset and an equivalent but differently scheduled min expression.

### Attempt 2 notes

Corrected the 0x50008 size offset and source min ordering, but changed saved-register assignment and expanded the function.

### Attempt 3 notes

Matched the released declaration order and standard min helper; generated code remained identical to attempt 2.

### Attempt 4 notes

An explicit fixed-register output constraint triggered an EE compiler allocation failure.

### Attempt 5 notes

Fixed saved-register declarations without an output constraint recovered target size and improved the best byte score to 86.7925%, but eleven scheduler instructions remained.

## Outcome

Recovered the exact PCM ring-buffer flow, 0x50008 ReadBuf size offset, wrap logic, decoder calls, and copy arguments. Five candidates could not reproduce eleven saved-register and min scheduler instructions; best byte score was 86.7925%.
