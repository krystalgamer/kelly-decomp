# FixupEntityMesh__FP7nglMeshi

- Address: `0x0012A1F0`
- Size: `0x1F4` (500 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.cpp`
- Reference source: `KS/SRC/entity.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 56.4 | 44.8 | `candidate.cpp` |

### Attempt 1 notes

# FIRST PASS wave92 B3

- Target: `0x0012A1F0 FixupEntityMesh__FP7nglMeshi` (500 / `0x1F4`), object `game/files_entity`.
- Exact released body: `kelly-slaters-pro-surfer/KS/SRC/entity.cpp:710-788`.
- Confirmed attempts0 before preparation/testing.
- Candidate: LF-only exact body with minimal faithful self-contained declarations and no headers.
- Sole attempt: `different`; byte score 56.4000% (282/500), instruction score 44.8000% (56/125); candidate 488 bytes, target 500 bytes.
- Candidate SHA-1: `bee8ebbea6cfd8c200b244d0dae6941b797169ad`.
- Exactly one candidate and one harness invocation. No alternate, asm, annotations, variants, retry, attempts 2-5, or post-test chase.
- Tracked/reference files remained read-only. No finalize, integrate, build, git mutation, or full packet submission.

## Outcome

The exact released entity-mesh fixup body differed at 56.4000% byte score; no source variant was attempted.
