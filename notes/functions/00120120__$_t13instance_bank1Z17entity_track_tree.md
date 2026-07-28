# _$_t13instance_bank1Z17entity_track_tree

- Address: `0x00120120`
- Size: `0x1B4` (436 bytes)
- Object: `game/files_anim`
- Debug source: `C:/KS/SRC/instance.h`
- Reference source: `KS/SRC/instance.h`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

# Wave 78 lane A1 — attempt 1

- Target: `0x00120120` `_$_t13instance_bank1Z17entity_track_tree`, object `game/files_anim`, expected size 436 (`0x1B4`).
- Released citations: `kelly-slaters-pro-surfer/KS/SRC/instance.h:13-89` (template/declarations), `instance.h:98-109` (exact destructor body), and `kelly-slaters-pro-surfer/KS/SRC/entity_anim.h:68-105` (`entity_track_tree` declaration).
- Candidate: included the released headers and explicitly instantiated `instance_bank<entity_track_tree>::~instance_bank()`, thereby selecting the exact released template body without an alternate implementation.
- Result: `compile_failed`; byte score `0.0`; instruction score unavailable; expected size 436 bytes; candidate object size unavailable; candidate source size 109 bytes; SHA-1 `6227dd6dcf92e84a68f348bab14cceda0319a60b`.
- Compiler failure: released headers were not found on the harness include paths (`entity_anim.h`, `instance.h`).
- UTC start: `2026-07-28T18:20:57Z`; UTC end: `2026-07-28T18:24:13Z`; duration: 196 seconds.
- Exactly one harness test invocation was made. No retry, finalize, build, or tracked-file edit occurred.

## Outcome

The exact released entity-track-tree instance-bank destructor candidate failed to compile with its released include dependency; no alternate source was attempted.
