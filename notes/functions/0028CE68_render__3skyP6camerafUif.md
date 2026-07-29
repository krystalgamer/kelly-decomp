# render__3skyP6camerafUif

- Address: `0x0028CE68`
- Size: `0x200` (512 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/sky.cpp`
- Reference source: `KS/SRC/sky.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

# FIRST PASS wave95 B1

- Target: `0x0028CE68 render__3skyP6camerafUif` (512 / `0x200`), `game/files_misc1`.
- Exact released body: `kelly-slaters-pro-surfer/KS/SRC/sky.cpp` lines 36-44.
- Confirmed attempts0 before preparation/testing (`pending`; queue attempts `0`; no prior local attempt history).
- Candidate: LF-only exact released function body using the released declarations/header set.
- Sole attempt: `compile_failed`; score 0.0000%. The isolated compiler could not resolve the released include closure (standard, SDK, and project headers).
- Candidate SHA-1: `041c40555f99862177f2b289437f14f096e24bc2`.
- Exactly one candidate and one valid harness invocation. No alternative, retry, chase, attempts 2-5, build, finalize, integration, git operation, or tracked edit.

## Outcome

The exact released sky rendering candidate failed to compile with its released include closure; no alternate source was attempted.
