# render__16ai_polypath_cell

- Address: `0x0010D770`
- Size: `0x1A0` (416 bytes)
- Object: `game/files_ai`
- Debug source: `C:/KS/SRC/ai_polypath_cell.cpp`
- Reference source: `KS/SRC/ai_polypath_cell.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 79.3269 | 80.7692 | `candidate.cpp` |

### Attempt 1 notes

# First pass B1 notes — render__16ai_polypath_cell

- Used the exact released body from `KS/SRC/ai_polypath_cell.cpp`.
- Retained only minimal declarations required to compile that body.
- Tested exactly once with `env/bin/python tools/function_test.py test 0x0010D770 --candidate 'tmp/functions/0010D770_render__16ai_polypath_cell/candidate.cpp'`.
- Result: `different`; byte score 79.3269% (330/416), instruction score 80.7692% (84/104), with exact target size 416 bytes.
- No variants, diff chasing, build, finalization, tracked-source edits, commit, or push were performed.

Citations:
- `kelly-slaters-pro-surfer/KS/SRC/ai_polypath_cell.cpp:506-529`
- `kelly-slaters-pro-surfer/KS/SRC/ai_polypath_cell.h:467,472-495`
- `kelly-slaters-pro-surfer/KS/SRC/color.h:29-52`
- `kelly-slaters-pro-surfer/KS/SRC/debug_render.h:16-17,51`
- `tmp/functions/0010D770_render__16ai_polypath_cell/attempt-1/result.json`

## Outcome

The exact released AI polypath-cell rendering differed at 79.3269% byte score; no source variant was attempted.
