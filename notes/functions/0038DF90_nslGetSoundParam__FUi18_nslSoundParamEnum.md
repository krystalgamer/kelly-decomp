# nslGetSoundParam__FUi18_nslSoundParamEnum

- Address: `0x0038DF90`
- Size: `0x1C0` (448 bytes)
- Object: `nsl/nsl_ps2_sound`
- Debug source: `C:/NSL/PS2/nsl_ps2_sound.cpp`
- Reference source: `NSL/PS2/nsl_ps2_sound.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | symbol_missing | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

Attempt 1 uses the exact released nslGetSoundParam body with faithful inline validation helpers and minimal self-contained PS2 NSL type/layout declarations. Reference inspected at kelly-slaters-pro-surfer/NSL/PS2/nsl_ps2_sound.cpp:800-822 and nsl_ps2.h:43-108,156-188,220-253,324-343,380-383; target inspected before testing at tmp/functions/0038DF90_nslGetSoundParam__FUi18_nslSoundParamEnum/target.s. No project headers, alternate logic, assembly, annotations, variants, or retries.

## Outcome

The exact released sound parameter getter candidate compiled without emitting the target symbol; no source variant was attempted.
