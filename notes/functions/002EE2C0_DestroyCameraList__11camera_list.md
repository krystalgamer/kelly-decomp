# DestroyCameraList__11camera_list

- Address: `0x002EE2C0`
- Size: `0x19C` (412 bytes)
- Object: `game/files_misc2`
- Debug source: `ks/camera_tool.cpp`
- Reference source: `KS/SRC/ks/camera_tool.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

# FIRST PASS wave 72 lane A4 — 0x002EE2C0

- Status: **source_pending** (`compile_failed`)
- Attempts: **1**
- Candidate: `tmp/functions/002EE2C0_DestroyCameraList__11camera_list/attempt-1/candidate.cpp`
- SHA-1: `58d439821081292eed5feeac217e5000f19cf0f0`
- Started: `2026-07-28T14:19:23.957000Z`
- Completed: `2026-07-28T14:23:57.938351Z`
- Duration: **273.981351s**

The exact released body from `camera_tool.cpp:178-199` was tested once with minimal source-faithful declarations. Compilation failed because the isolated declarations did not define `NULL`. No correction, variants, retries, diff chasing, finalization, integration, build, commit, or tracked-file edits were performed.

## Citations

- `kelly-slaters-pro-surfer/KS/SRC/ks/camera_tool.cpp:178-199`
- `kelly-slaters-pro-surfer/KS/SRC/ks/camera_tool.h:67-91`
- `kelly-slaters-pro-surfer/KS/SRC/ks/simple_list.h:7-18,84-99`
- `kelly-slaters-pro-surfer/KS/SRC/ks/menu.h:78-129,140-194,275-296`
- `tmp/functions/002EE2C0_DestroyCameraList__11camera_list/attempt-1/result.json`
- `tmp/functions/002EE2C0_DestroyCameraList__11camera_list/attempt-1/compiler.stderr`

## Outcome

The exact released camera-list destruction failed to compile in the isolated bench; no source variant was attempted.
