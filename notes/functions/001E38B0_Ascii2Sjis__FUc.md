# Ascii2Sjis__FUc

- Address: `0x001E38B0`
- Size: `0x10C` (268 bytes)
- Object: `game/files_hwosps2`
- Debug source: `C:/KS/SRC/hwosps2/ps2_gamesaver.cpp`
- Reference source: `KS/SRC/HWOSPS2/ps2_gamesaver.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 96.6418 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Attempt 1 used exact released source cited at kelly-slaters-pro-surfer/KS/SRC/HWOSPS2/ps2_gamesaver.cpp:24-67,73,176-215; kelly-slaters-pro-surfer/KS/SRC/debug.h:25; config/SLUS_203.34.symbol_addrs.txt:2865; config/SLUS_203.34.symbol_addrs.txt:371; notes/function_queue.csv:5755; tmp/functions/001E38B0_Ascii2Sjis__FUc/attempt-1/result.json. Result `different`, score 96.6418; no later attempt.

## Outcome

The exact released ASCII-to-SJIS conversion differed bytewise from the target despite matching instruction opcodes; the sole attempt scored 96.6418%.
