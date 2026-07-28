# spraypt_pos__5trailP15spray_control_t

- Address: `0x00364A20`
- Size: `0x184` (388 bytes)
- Object: `game/files_wave`
- Debug source: `C:/KS/SRC/ks/trail.cpp`
- Reference source: `KS/SRC/ks/trail.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 47.4227 | 23.7113 | `candidate.cpp` |

### Attempt 1 notes

# Attempt 1 — exact released source/minimal declarations

- FIRST PASS wave 64 lane B5 for `0x00364A20 spraypt_pos__5trailP15spray_control_t` (388 bytes, `game/files_wave`).
- Tested exactly one exact released body with minimum source-faithful declarations for `vector3d`, `spray_control_t`, trail-node position layout, `board_spray`, and `FXD`.
- Result: **different**, byte score **47.4227%** (184/388) and instruction score **23.7113%** (23/97); candidate and target sizes are both 388 bytes.
- No variants, retries, diff chasing, normalization, tracked-file edits, finalize/integrate, ROM build, commit, or git mutation were performed.

## Citations

- `kelly-slaters-pro-surfer/KS/SRC/ks/trail.cpp:62-74,1173-1179`
- `kelly-slaters-pro-surfer/KS/SRC/ks/trail.h:15-53`
- `kelly-slaters-pro-surfer/KS/SRC/ks/ksfx.h:73`
- `tmp/functions/00364A20_spraypt_pos__5trailP15spray_control_t/attempt-1/result.json`

## Outcome

The exact released trail spray-point position function differed at 47.4227% byte score; no source variant was attempted.
