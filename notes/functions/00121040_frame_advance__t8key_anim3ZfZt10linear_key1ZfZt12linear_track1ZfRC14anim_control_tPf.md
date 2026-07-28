# frame_advance__t8key_anim3ZfZt10linear_key1ZfZt12linear_track1ZfRC14anim_control_tPf

- Address: `0x00121040`
- Size: `0x184` (388 bytes)
- Object: `game/files_anim`
- Debug source: `C:/KS/SRC/anim.h`
- Reference source: `KS/SRC/anim.h`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 35.0515 | 14.433 | `candidate.cpp` |

### Attempt 1 notes

# 0x00121040 released-source first pass

- Tested exactly one candidate: the released `key_anim::frame_advance` body with only the required animation-control, key, track, and template declarations.
- Result: `different`, byte score `35.0515%`, instruction score `14.433%` (136/388 bytes; 14/97 instructions).
- Candidate SHA-1: `e8d3c8b860b33289494825ff91188b8f381d1f3c`.
- No retry, alternative declaration layout, diff chase, finalize, integration, ROM build, tracked edit, or commit.

## Citations

- `kelly-slaters-pro-surfer/KS/SRC/anim.h:39-140,239-309@7c3ade041cc03409a3114ce3ba4a70053c6e4e3b`
- `tmp/functions/00121040_frame_advance__t8key_anim3ZfZt10linear_key1ZfZt12linear_track1ZfRC14anim_control_tPf/attempt-1/candidate.cpp`
- `tmp/functions/00121040_frame_advance__t8key_anim3ZfZt10linear_key1ZfZt12linear_track1ZfRC14anim_control_tPf/attempt-1/result.json`

## Timing

- Start: `2026-07-28T09:59:14.686721Z`
- End: `2026-07-28T10:03:57.399092Z`
- Elapsed: `282.712208 s`

## Outcome

The exact released float key-animation advance differed at 35.0515% byte score; no source variant was attempted.
