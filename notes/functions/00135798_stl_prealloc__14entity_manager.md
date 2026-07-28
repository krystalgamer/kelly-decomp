# stl_prealloc__14entity_manager

- Address: `0x00135798`
- Size: `0x1B4` (436 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.cpp`
- Reference source: `KS/SRC/entity.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

# Attempt 1 notes

- Wave/lane: released-source FIRST PASS wave 78, lane A3.
- Target: `0x00135798 stl_prealloc__14entity_manager`, object `game/files_entity`, expected size 436 bytes (`0x1B4`). Metadata citation: `tmp/functions/00135798_stl_prealloc__14entity_manager/metadata.json`.
- Released source citation: exact body at `kelly-slaters-pro-surfer/KS/SRC/entity.cpp:4323-4340`; declarations based on `entity.h:171-203`, `entity.h:225-261`, `conglom.h:12`, and `singleton.h:9-62`.
- Target assembly citation: `tmp/functions/00135798_stl_prealloc__14entity_manager/target.s:1-112`, identifying the 436-byte reference and constructor/vector behavior.
- Candidate: `attempt-1/candidate.cpp`; SHA-1 `80ed4ff41b9238bc38732c835f2143cd5ee2b777`; source size 993 bytes.
- Result: `compile_failed`; score 0.0; matched/reference instruction counts unavailable because no object was emitted; candidate text size unavailable; reference size 436 bytes.
- Compiler evidence: `attempt-1/compiler.stderr` reports `vector: No such file or directory`. Result record: `attempt-1/result.json`.
- UTC timing: start `2026-07-28T18:21:05Z`; end `2026-07-28T18:33:51Z`.
- Compliance: exactly one candidate attempt and exactly one test harness invocation; no retry or diff chasing. No build, finalize, integration, match_manifest, ninja, configure, git add/commit/reset/checkout/clean, or tracked-file edit was performed. Tracked status changed during lane work: `false` (before/after snapshots are in `tmp/`).

## Outcome

The exact released entity-manager STL preallocation candidate failed to compile because the isolated harness lacks the released vector header path; no alternate source was attempted.
