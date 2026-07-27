# nslSetEmitterAutoRelease__FUi

- Address: `0x0038F558`
- Size: `0x118` (280 bytes)
- Object: `nsl/nsl_ps2_emitter`
- Debug source: `C:/NSL/PS2/nsl_ps2_emitter.cpp`
- Reference source: `NSL/PS2/nsl_ps2_emitter.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 6.4286 | 1.4286 | `candidate.cpp` |

### Attempt 1 notes

Attempt 1 used exact released source cited at kelly-slaters-pro-surfer/NSL/PS2/nsl_ps2_emitter.cpp:104-109; kelly-slaters-pro-surfer/NSL/PS2/nsl_ps2.h:43-65,104-108,200-214; kelly-slaters-pro-surfer/NSL/PS2/nsl_ps2_emitter.lst:665-714; config/SLUS_203.34.symbol_addrs.txt: target symbol for 0x0038F558; notes/function_queue.csv: target row for 0x0038F558. Result `different`, score 6.4286; no later attempt.

## Outcome

The exact released emitter auto-release setter differed from the target; the sole attempt scored 6.4286%.
