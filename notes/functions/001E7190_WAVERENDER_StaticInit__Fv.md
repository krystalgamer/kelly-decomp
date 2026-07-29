# WAVERENDER_StaticInit__Fv

- Address: `0x001E7190`
- Size: `0x26C` (620 bytes)
- Object: `game/files_hwosps2`
- Debug source: `ks/waverendermenu.cpp`
- Reference source: `KS/SRC/ks/waverendermenu.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

# FIRST PASS wave118 B2

Target: `0x001E7190 WAVERENDER_StaticInit__Fv` (620/0x26C), `game/files_hwosps2`

Reference: `kelly-slaters-pro-surfer/KS/SRC/ks/waverendermenu.cpp`

Attempts before: 0

Attempt 1 used the exact released function body after preprocessing the six PS2 menu-template entries, with minimal self-contained declarations and LF line endings.

Result: `compile_failed`; score `0.0`. The compiler rejected `NULL` because the minimal declarations did not define it.

Exactly one candidate was tested. No retry, follow-up candidate, build, finalization, integration, queue edit, tracked edit, commit, or push was performed.

## Outcome

The exact released wave-render menu initialization candidate failed to compile with its minimal declarations; no alternate source was attempted.
