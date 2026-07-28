# set_rot__2poRC8vector3d

- Address: `0x003489C0`
- Size: `0x198` (408 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/po.cpp`
- Reference source: `KS/SRC/po.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 28.9216 | 10.7843 | `candidate.cpp` |

### Attempt 1 notes

# FIRST PASS wave 71 lane A1 — 0x003489C0

- Confirmed there were no prior attempts.
- Copied the exact active released `po::set_rot(const vector3d&)` body from `kelly-slaters-pro-surfer/KS/SRC/po.cpp:430-474`.
- Added minimal declarations faithful to the released vector, matrix, and `po` layouts and inline vector operations.
- Ran `function_test` exactly once. Result: `different`, byte score 28.9216%, instruction score 10.7843%.
- No variants, retries, disassembly comparison, diff chasing, build, finalization, integration, commit, push, or tracked-file edits were performed.
- Because the attempt did not match, no source, prefix, or shared-declaration proposal is included.

## Citations

- `kelly-slaters-pro-surfer/KS/SRC/po.cpp:430-474`
- `kelly-slaters-pro-surfer/KS/SRC/po.h:62-70`
- `kelly-slaters-pro-surfer/KS/SRC/HWOSPS2/ps2_algebra.h:292-328,686-694`
- `tmp/functions/003489C0_set_rot__2poRC8vector3d/attempt-1/result.json`

## Outcome

The exact released PO rotation setter differed at 28.9216% byte score; no source variant was attempted.
