# ReleaseFE__9FEManager

- Address: `0x00198F10`
- Size: `0x160` (352 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FrontEndManager.cpp`
- Reference source: `KS/SRC/ks/FrontEndManager.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 40.4891 | 45.6522 | `candidate.cpp` |

### Attempt 1 notes

# Attempt 1 — exact released source/minimal declarations

- FIRST PASS wave 47 lane B2 for `0x00198F10 ReleaseFE__9FEManager`.
- Tested the exact released `FEManager::ReleaseFE()` body once with the released PS2/static-STL branches and minimal self-contained declarations for the manager layout, singleton accessors, cleanup classes, instance banks, globals, and callees.
- Result: **different**, byte score **40.4891%** and instruction score **45.6522%** (149/368 compared bytes; 42/92 instructions). The candidate emitted the target symbol at 368 bytes versus the 352-byte target.
- Exactly one non-placeholder candidate was tested using `env/bin/python`.
- No variants, retries, diff chasing, build, finalization, integration, tracked-file/tool edits, subagents, lean work, commit, or push were performed.

## Citations

- `kelly-slaters-pro-surfer/KS/SRC/ks/FrontEndManager.cpp:459-531`
- `kelly-slaters-pro-surfer/KS/SRC/ks/FrontEndManager.h:11-120`
- `kelly-slaters-pro-surfer/KS/SRC/singleton.h:8-61`
- `tmp/functions/00198F10_ReleaseFE__9FEManager/attempt-1/result.json`

## Outcome

The exact released frontend teardown with minimal declarations differed from the target; the sole first-pass attempt scored 40.4891%.

## Outcome

The exact released frontend release definition differed from the target; the sole attempt scored 40.4891%.
