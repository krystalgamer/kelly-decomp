# WAVE_CheckBreakType__FRC7stringx

- Address: `0x003775C8`
- Size: `0x10C` (268 bytes)
- Object: `game/files_wave`
- Debug source: `C:/KS/SRC/ks/wave.cpp`
- Reference source: `KS/SRC/ks/wave.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 19.5205 | 4.1096 | `candidate.cpp` |

### Attempt 1 notes

# Attempt 1 — exact released source

- Copied `WAVE_CheckBreakType` exactly from the released source.
- Added one self-contained declaration set for `stringx`, `string_buf`, wave break enums/structures, globals, and the released disabled `wavewarn` macro.
- Ran `function_test` exactly once. Result: `different`; byte score 19.5205% (57/292), instruction score 4.1096% (3/73), candidate size 292 versus target 268.
- No variants, retries, disassembly comparison, or diff chasing were performed.
- Because the attempt did not match, no source, prefix, or shared-declaration proposal is included.

## Citations

- `kelly-slaters-pro-surfer/KS/SRC/ks/wave.cpp:72-85,647-660,3140-3172`
- `kelly-slaters-pro-surfer/KS/SRC/ks/wave.h:265-274`
- `kelly-slaters-pro-surfer/KS/SRC/ks/wavebreak.txt:1-7`
- `kelly-slaters-pro-surfer/KS/SRC/stringx.h:62-76,193-202,230-287,310,374-378,456-460`
- `tmp/functions/003775C8_WAVE_CheckBreakType__FRC7stringx/attempt-1/result.json`

## Outcome

The exact released wave break-type checker differed from the target; the sole attempt scored 19.5205%.
