# nglVif1AddWaveDark__FRPUiRUiP11nglMaterialUib

- Address: `0x001E7468`
- Size: `0x10C` (268 bytes)
- Object: `game/files_hwosps2`
- Debug source: `C:/KS/SRC/hwosps2/ps2_waverender.cpp`
- Reference source: `KS/SRC/HWOSPS2/ps2_waverender.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 42.7536 | 21.7391 | `candidate.cpp` |

### Attempt 1 notes

# Attempt 1 — exact released source

- Copied the released `nglVif1AddWaveDark` body exactly from `kelly-slaters-pro-surfer/KS/SRC/HWOSPS2/ps2_waverender.cpp:70-85`.
- Included only the required exact declarations: `nglStageStruct` through `DetailPass`, the wave/base/global symbols, the VIF constants/macros, and the two inline command-list helpers.
- Ran `function_test` exactly once. Result: `different`, byte score 42.7536% (118/276), instruction score 21.7391% (15/69), candidate size 276 versus target 268.
- No variants, retries, or diff chasing were performed. Because the attempt did not match, no source, prefix, or shared-declaration proposal is made.

## Citations

- `kelly-slaters-pro-surfer/KS/SRC/HWOSPS2/ps2_waverender.cpp:16-18,70-85`
- `kelly-slaters-pro-surfer/NGL/PS2/ngl_ps2_internal.h:100-103,365-385,821,935,944,968,1276-1292`
- `config/SLUS_203.34.symbol_addrs.txt:9670,9733,10181-10182,12085`

## Outcome

The exact released wave-dark VIF helper differed from the target; the sole attempt scored 42.7536%.
