# WorldToPulse__t21WavePulsePerturbClass1i6f

- Address: `0x003844F8`
- Size: `0x1A0` (416 bytes)
- Object: `game/files_wave`
- Debug source: `C:/KS/SRC/ks/wave.cpp`
- Reference source: `KS/SRC/ks/wave.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

FIRST PASS wave 73 A5
Target: 0x003844F8 WorldToPulse__t21WavePulsePerturbClass1i6f
Released body: select pulse progress by perturb stage, shift and clamp the pulse-domain coordinate, evaluate the pulse spline, and convert it back to profile space.
Exactly one scratch candidate used the exact released template body with the existing minimal wave perturb declarations and explicit `<6>` instantiation.
Result: compile_failed, score 0.0%; isolated declarations lacked assert, min, max, and SPLINE_Evaluate.
No retry, variants, diff chasing, build, finalize, integration, tracked-file edits, commit, or push.

Citations:
- kelly-slaters-pro-surfer/KS/SRC/ks/wave.cpp:3513-3542
- tmp/functions/003844F8_WorldToPulse__t21WavePulsePerturbClass1i6f/attempt-1/result.json

## Outcome

The exact released wave pulse conversion failed to compile in the isolated bench; no source variant was attempted.
