# DetermineTubeGaps__22kellyslater_controller

- Address: `0x00222620`
- Size: `0x24C` (588 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/kellyslater_controller.cpp`
- Reference source: `KS/SRC/ks/kellyslater_controller.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 41.6667 | 31.9728 | `candidate.cpp` |

### Attempt 1 notes

# FIRST PASS wave112 B4 0x00222620

Exact released `DetermineTubeGaps` source was recovered from `historicalsource/kelly-slaters-pro-surfer` (`KS/SRC/ks/kellyslater_controller.cpp`, commit `7c3ade041cc03409a3114ce3ba4a70053c6e4e3b`). The single LF candidate preserves its region/tube reset, marker normalization, threshold ordering, gap IDs, flags, and sound events; only minimal self-contained declarations and numeric enum values were supplied for the harness.

Result: different, 41.6667% bytes, 31.9728% instructions, emitted 576 vs target 588 bytes. No follow-up attempted.

## Outcome

The exact released tube-gap determination body differed at 41.6667% byte score; no source variant was attempted.
