# _nslClearEmitterSlot__FUib18_nslClearBehaviour

- Address: `0x003910A0`
- Size: `0xF4` (244 bytes)
- Object: `nsl/nsl_ps2`
- Debug source: `C:/NSL/PS2/nsl_ps2.cpp`
- Reference source: `NSL/PS2/nsl_ps2.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 70.9559 | 58.8235 | `candidate.cpp` |

### Attempt 1 notes

Exact released `_nslClearEmitterSlot` body with the authentic PS2 NSL source, sound, emitter, system, and `fifo_queue` declarations. The slot addressing and field-clear sequence compiled as expected, but EE GCC tail-called each switch arm separately, duplicating epilogues and producing 272 bytes instead of 244.

## Outcome

Exact released emitter reset differed in switch-arm tail-call formation.
