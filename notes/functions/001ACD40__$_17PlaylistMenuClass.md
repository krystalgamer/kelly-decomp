# _$_17PlaylistMenuClass

- Address: `0x001ACD40`
- Size: `0x1DC` (476 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FrontEndMenus.cpp`
- Reference source: `KS/SRC/ks/FrontEndMenus.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

# FIRST PASS wave88 B2

- Target: `0x001ACD40 _$_17PlaylistMenuClass`, 476 bytes (`0x1DC`), object `game/files_frontend`.
- Exact released body: `kelly-slaters-pro-surfer/KS/SRC/ks/FrontEndMenus.cpp:1672-1701`.
- Minimal faithful declarations came from released `FrontEndMenus.h:422-451`, `FEMenu.h:161-216`, `FEPanel.h:48-78`, and `stringx.h:230-287`.
- Confirmed `attempts_used: 0` before testing.
- Sole invocation: `python3 tools/function_test.py test 0x001ACD40 --candidate tmp/source-first-wave88/B2-001ACD40/candidate.cpp`.
- Result: **compile_failed**, score `0.0`. The assembler reported `relocation overflow` at generated assembly line 215.
- Candidate SHA-1: `62fe2b34d644883458a2852dea93273fa4f78b63`.
- Candidate SHA-256: `af9a15798b122eacda9e6772d627a5ed701d8daef674312bd51174a3c5e5f74d`.
- Candidate is LF-only, self-contained, and includes no headers.
- Exactly one released-body candidate and one attempt. No alternatives, assembly implementation, annotations, variants, retries, attempts 2-5, or post-test chase.
- Tracked/reference files remained read-only. No finalize, integrate, build, or git mutation.

## Outcome

The exact released playlist-menu destructor candidate failed to compile with its minimal released declarations; no alternate source was attempted.
