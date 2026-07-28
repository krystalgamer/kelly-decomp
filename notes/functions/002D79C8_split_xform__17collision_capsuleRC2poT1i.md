# split_xform__17collision_capsuleRC2poT1i

- Address: `0x002D79C8`
- Size: `0x1D8` (472 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/capsule.cpp`
- Reference source: `KS/SRC/capsule.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 33.8983 | 16.1017 | `candidate.cpp` |

### Attempt 1 notes

# FIRST PASS wave87 B2

- Target: `0x002D79C8 split_xform__17collision_capsuleRC2poT1i`, 472 bytes (`0x1D8`), object `game/files_misc2`.
- Exact released body: `kelly-slaters-pro-surfer/KS/SRC/capsule.cpp:55-77` at commit `7c3ade041cc03409a3114ce3ba4a70053c6e4e3b`.
- Confirmed `attempts0` immediately after prepare.
- Candidate is LF-only and self-contained, with minimal faithful declarations and no headers.
- Sole invocation is recorded in `invocation.txt`.
- Result: **different**; byte score **33.8983%** (160/472), instruction score **16.1017%** (19/118), candidate size **456** bytes.
- Candidate SHA-1: `8949c7051ce53b5adb64c2743128d605e4da71a6`; SHA-256: `9838b85e827da884ffaf4e984fff55548016a5f9b82142f414ff042f787b1d1c`.
- Exactly one honest candidate and one test attempt. No alternate implementation, assembly candidate, annotations, variants, retry, attempts 2-5, or post-test chase.
- Tracked/reference files remained read-only. No finalize, integrate, build, or git operation was performed.

## Outcome

The exact released collision-capsule split transform body differed at 33.8983% byte score; no source variant was attempted.
