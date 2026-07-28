# Load__13CheatCodeMenu

- Address: `0x001D2098`
- Size: `0x1BC` (444 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/CheatFrontEnd.cpp`
- Reference source: `KS/SRC/ks/CheatFrontEnd.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

# Attempt 1 notes

- Wave/lane: released-source FIRST PASS wave 79, lane B5
- Target: `0x001D2098 Load__13CheatCodeMenu`, size 444 (`0x1BC`), object `game/files_frontend`
- Released body: `kelly-slaters-pro-surfer/KS/SRC/ks/CheatFrontEnd.cpp:264-280`
- Faithful declarations/constants: `kelly-slaters-pro-surfer/KS/SRC/ks/CheatFrontEnd.h:12-28,95-126`, `kelly-slaters-pro-surfer/KS/SRC/ks/FEPanel.h:48-126`, `kelly-slaters-pro-surfer/KS/SRC/text_font.h:82-84`
- Reference checkout SHA: `7c3ade041cc03409a3114ce3ba4a70053c6e4e3b`; tracked worktree SHA: `54a0548f6248309e978f281dec79429145fcd248`
- Confirmed attempts=0 before prepare; inspected `metadata.json` and `target.s` before testing.
- Result: `compile_failed`, score 0.0. Compiler reported `NULL` undeclared at the released body's `cheats[i] = NULL` line.
- Candidate SHA-1: `0108d33fc179344ccaa244b516590438d3417b61`; source size: 2547 bytes.
- UTC start: 2026-07-28T18:58:09Z; UTC end: 2026-07-28T19:04:04Z; duration: 355 seconds.
- One valid scoring test produced exactly one attempts record. A preceding malformed CLI invocation was rejected by argparse before candidate testing and created no attempt; no retry or diff chasing followed.
- No alternate implementation, manual assembly/matching annotation, variants, finalize, integration, manifest operation, configure/build/ninja, git mutation, or tracked edit.

## Outcome

The exact released cheat-code menu load candidate failed to compile with its minimal released declarations; no alternate source was attempted.
