# Load__Q214IGOIconManager12IconResourceiiiRC7stringx

- Address: `0x00163B00`
- Size: `0x178` (376 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/igoiconmanager.cpp`
- Reference source: `KS/SRC/ks/igoiconmanager.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

Exact released-source FIRST PASS attempt using the function body verbatim from `KS/SRC/ks/igoiconmanager.cpp:1943-1972`, with minimal declarations/type layouts derived from `KS/SRC/ks/igoiconmanager.h:60-75`, `KS/SRC/stringx.h:230-236,373-378`, `NGL/PS2/ngl_fixedstr.h:14-57,129-135`, `KS/SRC/ks/surferdata.h:27-60`, `KS/SRC/game.h:251,573,631`, and `KS/SRC/ks/unlock_manager.h:9-31` at commit `7c3ade041cc03409a3114ce3ba4a70053c6e4e3b`.

Canonical attempt 1 result: `compile_failed`, score `0.0`. Compiler stopped at candidate line 1 because `<string.h>` was unavailable. Per the one-attempt constraint, no retry or declaration variant was attempted.

## Outcome

Exact released-source first pass for icon resource loading did not match.
