# frame_advance__t8key_anim3Z8vector3dZt10linear_key1Z8vector3dZt12linear_track1Z8vector3dRC14anim_control_tP8vector3d

- Address: `0x001213B8`
- Size: `0x184` (388 bytes)
- Object: `game/files_anim`
- Debug source: `C:/KS/SRC/anim.h`
- Reference source: `KS/SRC/anim.h`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 35.567 | 14.433 | `candidate.cpp` |

### Attempt 1 notes

# FIRST PASS wave 63 lane A5 — 0x001213B8

- No prior attempt existed at entry.
- Prepared one candidate using the exact released `key_anim::frame_advance` and `sync_key` bodies from `anim.h`, with only the declarations needed for the concrete vector track instantiation.
- Ran `function_test` exactly once. It compiled and emitted the requested symbol, scoring 35.567% bytes and 14.433% instructions (`different`).
- Per lane constraints, no variants, retries, diff chasing, integration, tracked-file edits, builds, commits, or cleanup were performed.

## Citations

- `kelly-slaters-pro-surfer/KS/SRC/anim.h:262-309`
- `tmp/functions/001213B8_frame_advance__t8key_anim3Z8vector3dZt10linear_key1Z8vector3dZt12linear_track1Z8vector3dRC14anim_c_f6c36a9b13bf/attempt-1/result.json`

## Outcome

The exact released vector key-animation advance differed at 35.5670% byte score; no source variant was attempted.
