# OnEvent__Q213IconChallenge4Task5EVENTP22kellyslater_controlleri

- Address: `0x00261358`
- Size: `0x1D8` (472 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/challenge_icon.cpp`
- Reference source: `KS/SRC/ks/challenge_icon.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

FIRST PASS wave87 A4
Target: 0x00261358 OnEvent__Q213IconChallenge4Task5EVENTP22kellyslater_controlleri (472/0x1D8), game/files_kellyslater
Reference: kelly-slaters-pro-surfer/KS/SRC/ks/challenge_icon.cpp
Confirmed attempts0 before testing.
Attempt 1: compile_failed, score 0.0. The compiler rejected SeriesList::back() because the released body accesses it through const Chain and the minimal declaration's back() lacked a const qualifier.
Candidate used the exact released function body with minimal faithful self-contained declarations, LF line endings, and no headers.
Exactly one candidate and one harness invocation. No alternatives, asm, annotations, variants, retries, attempts 2-5, or diff chase. No tracked edits, finalization, integration, build, commit, or full packet.
Candidate SHA-1: d4e22f2169e41c5fd4a4eec492a900cead3aed91

## Outcome

The exact released icon-challenge event candidate failed to compile with its minimal released declarations; no alternate source was attempted.
