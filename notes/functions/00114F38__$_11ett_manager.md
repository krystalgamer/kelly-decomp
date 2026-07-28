# _$_11ett_manager

- Address: `0x00114F38`
- Size: `0x188` (392 bytes)
- Object: `game/files_anim`
- Debug source: `C:/KS/SRC/entity_anim.cpp`
- Reference source: `KS/SRC/entity_anim.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

# FIRST PASS wave 65 lane A5 — 0x00114F38

- Status: **source_pending** (`compile_failed`)
- Attempts: **1**
- Score: **0.0000%**
- Candidate: `tmp/functions/00114F38__$_11ett_manager/attempt-1/candidate.cpp`
- SHA-1: `f1dba4db45b038cca50e761c1e1a9d8532a947dd`
- Started: `2026-07-28T11:04:46Z`; completed: `2026-07-28T11:04:49Z`; duration: **3s**

Exact released destructor body from `entity_anim.cpp:739-763` was tested once with minimal faithful declarations. Compilation failed because the isolated toolchain include path did not provide `<map>`. Per first-pass policy, no candidate variant or retry was made. No diff chasing, finalization, build, tracked-file edit, commit, or git mutation was performed.

Citations: `kelly-slaters-pro-surfer/KS/SRC/entity_anim.cpp:727-763`; `kelly-slaters-pro-surfer/KS/SRC/entity_anim.h:145-195`; `tmp/functions/00114F38__$_11ett_manager/attempt-1/compiler.stderr`; `tmp/functions/00114F38__$_11ett_manager/attempt-1/result.json`.

## Outcome

The exact released entity-track-tree manager destructor failed to compile in the isolated bench; no source variant was attempted.
