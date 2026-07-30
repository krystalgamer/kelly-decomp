# nglListSend__Fb

- Address: `0x003980F8`
- Size: `0x42C` (1068 bytes)
- Object: `ngl/ngl_ps2`
- Debug source: `C:/NGL/ps2/ngl_ps2.cpp`
- Reference source: `NGL/PS2/ngl_ps2.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

# Attempt 1 — released-source first pass

- Target: `0x003980F8` `nglListSend__Fb`, object `ngl/ngl_ps2`, expected size 1068 (`0x42C`); queue row `notes/function_queue.csv:7381`, symbol metadata `config/SLUS_203.34.symbol_addrs.txt:7801`.
- `attempts_before`: **0**.
- Exact released definition is at `kelly-slaters-pro-surfer/NGL/PS2/ngl_ps2.cpp:1546-1729`; no alternate released definition was found or attempted.
- Candidate used the released translation unit directly so the body and declarations/includes remained authentic: `#include "../../../kelly-slaters-pro-surfer/NGL/PS2/ngl_ps2.cpp"`.
- Sole invocation: `python3 tools/function_test.py test 0x003980F8 --candidate tmp/functions/003980F8_nglListSend__Fb/candidate.cpp`.
- Result: **compile_failed**, score **0.0**. The compiler could not resolve the released translation-unit include from the copied attempt directory. Per lane constraints, no path correction, alternate candidate, retry, diff chase, source-absent rewrite, or compiler/tool/build change was attempted.
- Candidate SHA-1: `519048f7386f2695b069f26a55c8354c568ce08f`; SHA-256: `7eeb1512f513072b12c76d00992dde8b4b60a739861c66745a1a517030bcb6dc`.
- UTC: start `2026-07-30T06:20:52Z`, end `2026-07-30T06:20:59Z`, elapsed 7s.
- No finalize, build, integration, commit, push, queue mutation, or tracked-tree edit.

## Outcome

The sole exact released-translation-unit attempt failed compilation because its include path was unresolved from the copied attempt directory; no alternate or retry was attempted.
