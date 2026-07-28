# make_instance__C7cg_meshP6entity

- Address: `0x002D9DF0`
- Size: `0x1B8` (440 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/colgeom.cpp`
- Reference source: `KS/SRC/colgeom.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 23.6364 | 8.1818 | `candidate.cpp` |

### Attempt 1 notes

# Attempt 1 — released-source first pass wave 79 lane A4

- Target: `0x002D9DF0` `make_instance__C7cg_meshP6entity`; object `game/files_misc2`; target size 440 (`0x1B8`) bytes.
- Exact released body: `kelly-slaters-pro-surfer/KS/SRC/colgeom.cpp:570-589`.
- Faithful declarations/layout citations: `kelly-slaters-pro-surfer/KS/SRC/colgeom.h:27-104`, `colmesh.h:17-129`, `instance.h:10-63`, `archalloc.h:136-152`, and `meshrefs.h` (`material_ref`).
- Candidate is one self-contained translation unit preserving the released function body unchanged and supplying only minimal local declarations/layouts required to compile without project headers.
- Target assembly inspected before testing: `tmp/functions/002D9DF0_make_instance__C7cg_meshP6entity/target.s`.
- Sole invocation: `env/bin/python tools/function_test.py test 0x002D9DF0 --candidate tmp/source-first-wave79/A4-002D9DF0/candidate.cpp`.
- Result: **different**; byte score 23.6364% (104/440); instruction score 8.1818% (9/110); candidate size 392 bytes.
- Candidate SHA-1: `79e81847b38b87a2fdbbaf48faa5b791f1f38f1d`; SHA-256: `9d9d5d4a6c52eec8f88671fd8e45308b371691d0631bcb9f2a76e9509fc9d351`.
- UTC timing: `2026-07-28T18:59:08Z` to `2026-07-28T19:04:08Z`; duration 300 seconds.
- Exactly one attempt and one harness invocation. No retry, variant, post-test diff chasing, finalize, integration, match_manifest, build/configure/ninja, tracked edit, commit, or other git mutation was performed.

## Outcome

The exact released collision-mesh instance creation body differed at 23.6364% byte score; no source variant was attempted.
