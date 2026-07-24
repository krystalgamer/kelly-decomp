# WAVETEX_UseWaveMesh__FUiiUi

- Address: `0x00381068`
- Size: `0x80` (128 bytes)
- Object: `game/files_wave`
- Debug source: `C:/KS/SRC/ks/wavetex.cpp`
- Reference source: `KS/SRC/ks/wavetex.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 60.9375 | 56.25 | `candidate.cpp` |
| 2 | different | 71.875 | 71.875 | `candidate.cpp` |
| 3 | symbol_missing | 0.0 | 0 | `candidate.cpp` |
| 4 | different | 71.0938 | 68.75 | `candidate.cpp` |
| 5 | different | 71.875 | 71.875 | `candidate.cpp` |

## Outcome

Deferred the released wave-mesh selection after five source-level attempts; all calls and globals were reconstructed, but prologue and address-arithmetic scheduling remained different.
