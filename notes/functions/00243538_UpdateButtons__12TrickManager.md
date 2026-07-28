# UpdateButtons__12TrickManager

- Address: `0x00243538`
- Size: `0x1CC` (460 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/trick_system.cpp`
- Reference source: `KS/SRC/ks/trick_system.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 68.4859 | 66.9014 | `candidate.cpp` |

### Attempt 1 notes

# FIRST PASS wave83 B4 — 0x00243538

- Target: `UpdateButtons__12TrickManager`, 460 bytes (`0x1CC`), object `game/files_kellyslater`.
- Exact released body: `kelly-slaters-pro-surfer/KS/SRC/ks/trick_system.cpp`, with minimal faithful self-contained declarations and no includes.
- Confirmed attempts=0 before prepare; inspected `metadata.json`, `target.s`, and the LF-only candidate before testing.
- Sole test result: `different`; byte score 68.4859% (389/568), instruction score 66.9014% (95/142); target size 460, candidate size 568.
- Candidate SHA-1: `dff549177af68ca25740dc2f859a272152f009cb`; SHA-256: `681fc44f967040df4442eff595ff0793ec2013b5222138c16cf8b8a3a68bf402`.
- Exactly one candidate and one attempt. No alternatives, asm body, annotations, variants, retry, attempts 2-5, or post-test chase.
- Tracked/reference files remained read-only. No finalize, integrate, build, or git mutation.

## Outcome

The exact released trick-button update body differed at 68.4859% byte score; no source variant was attempted.
