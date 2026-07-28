# ks_fx_create_launch_splash__FRC8vector3dT0R16WavePositionHinti

- Address: `0x0036B458`
- Size: `0x1A4` (420 bytes)
- Object: `game/files_wave`
- Debug source: `C:/KS/SRC/ks/ksfx.cpp`
- Reference source: `KS/SRC/ks/ksfx.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

# FIRST PASS wave74 A5 — 0x0036B458 `ks_fx_create_launch_splash__FRC8vector3dT0R16WavePositionHinti`

- Used the exact released `ks_fx_create_launch_splash` body with minimal standalone declarations.
- Tested exactly once with `env/bin/python tools/function_test.py test 0x0036B458 --candidate tmp/source_first/0036B458/candidate.cpp`.
- Result: `compile_failed`, score 0.0. The isolated declarations omitted the header-provided `NULL` definition.
- Preserved the attempt without repair. No variants, diff chasing, build, finalization, tracked-source edits, or commit were performed.

Sources:
- `kelly-slaters-pro-surfer/KS/SRC/ks/ksfx.cpp:90-110,1772-1799`
- `kelly-slaters-pro-surfer/KS/SRC/ks/ksfx.h:102-116`
- `kelly-slaters-pro-surfer/KS/SRC/ks/wave.h:131-144`
- `tmp/functions/0036B458_ks_fx_create_launch_splash__FRC8vector3dT0R16WavePositionHinti/attempt-1/result.json`
- `tmp/functions/0036B458_ks_fx_create_launch_splash__FRC8vector3dT0R16WavePositionHinti/attempt-1/compiler.stderr`

## Outcome

The exact released launch-splash creation failed to compile in the isolated bench; no source variant was attempted.
