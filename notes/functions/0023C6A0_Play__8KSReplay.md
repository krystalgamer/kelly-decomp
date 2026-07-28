# Play__8KSReplay

- Address: `0x0023C6A0`
- Size: `0x18C` (396 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/ksreplay.cpp`
- Reference source: `KS/SRC/ks/ksreplay.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

# Attempt 1 — exact released source/minimal declarations

- FIRST PASS wave 66 lane B5 for `0x0023C6A0 Play__8KSReplay`.
- Submitted the exact released `KSReplay::Play` body with minimal self-contained declarations.
- Result: **compile_failed** because the scratch declaration exposed `ResetPhysics` on `SurfBoardObjectClass` instead of `board_controller`; no score was produced.
- Exactly one test invocation was made; the failed attempt and compiler diagnostics are preserved.
- No variants, retries, diff chasing, finalization, build, integration, tracked-file edits, commit, or push were performed.

## Citations

- `kelly-slaters-pro-surfer/KS/SRC/ks/ksreplay.cpp:889-943`
- `kelly-slaters-pro-surfer/KS/SRC/ks/ksreplay.h:100-229`
- `tmp/functions/0023C6A0_Play__8KSReplay/attempt-1/result.json`

## Outcome

The exact released replay play function failed to compile in the isolated bench; no source variant was attempted.
