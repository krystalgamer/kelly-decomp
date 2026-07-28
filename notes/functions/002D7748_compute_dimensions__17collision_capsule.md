# compute_dimensions__17collision_capsule

- Address: `0x002D7748`
- Size: `0x1C8` (456 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/capsule.cpp`
- Reference source: `KS/SRC/capsule.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 14.3617 | 1.0638 | `candidate.cpp` |

### Attempt 1 notes

FIRST PASS wave83 A1
Target: 0x002D7748 compute_dimensions__17collision_capsule (456 bytes / 0x1C8, game/files_misc2)
Reference: historicalsource/kelly-slaters-pro-surfer/KS/SRC/capsule.cpp
Confirmed attempts=0 before testing. Exactly one nonempty LF self-contained candidate was tested. It preserves the exact released compute_dimensions body and supplies minimal local declarations only, with no unavailable headers.
Result: different, score 14.3617% (108/752 compared matching bytes; 2/188 matching instructions); candidate size 752 bytes versus target size 456 bytes.
No alternatives, assembly candidate, annotations, variants, retry, attempts 2-5, diff chasing, tracked edits, finalize, integrate, build, commit, or push. The low match reflects declaration/layout and code-generation mismatch around entity virtual dispatch and vector operations; this first-pass lane intentionally stopped after the single honest test.

## Outcome

The exact released collision-capsule dimension computation body differed at 14.3617% byte score; no source variant was attempted.
