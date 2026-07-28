# compute_radius__12conglomerate

- Address: `0x003048B0`
- Size: `0x194` (404 bytes)
- Object: `game/files_misfits`
- Debug source: `C:/KS/SRC/conglom.cpp`
- Reference source: `KS/SRC/conglom.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 15.5941 | 0.0 | `candidate.cpp` |

### Attempt 1 notes

# Attempt 1 — exact released source

- Result: **different**
- Byte score: **15.5941%** (63/404)
- Instruction score: **0.0000%** (0/101)
- Candidate size: `380` bytes; target size: `404` bytes.
- Used the exact released `conglomerate::compute_radius` body with minimal self-contained declarations.
- No variants, disassembly comparison, diff chasing, build, finalization, integration, commit, or tracked-file edits were performed.

## Citations

- `kelly-slaters-pro-surfer/KS/SRC/conglom.cpp:366-387` — exact released function body.
- `kelly-slaters-pro-surfer/KS/SRC/conglom.h:15-30,104-118` — released class members and declaration.
- `kelly-slaters-pro-surfer/KS/SRC/entity.h:703-704,719-721,922` — entity radius, position, and collision geometry API.
- `kelly-slaters-pro-surfer/KS/SRC/colgeom.h:33-81` — collision geometry type and radius API.
- `kelly-slaters-pro-surfer/KS/SRC/HWOSPS2/ps2_algebra.h:292-374` — released vector operations and length.
- `tmp/functions/003048B0_compute_radius__12conglomerate/attempt-1/result.json` — sole test result.

## Outcome

The exact released conglomerate radius calculation differed at 15.5941% byte score; no source variant was attempted.
