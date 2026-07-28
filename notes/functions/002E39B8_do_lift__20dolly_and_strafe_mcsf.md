# do_lift__20dolly_and_strafe_mcsf

- Address: `0x002E39B8`
- Size: `0x1CC` (460 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/mcs.cpp`
- Reference source: `KS/SRC/mcs.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 8.2609 | 1.7391 | `candidate.cpp` |

### Attempt 1 notes

FIRST PASS wave84 A1
Target: 0x002E39B8 do_lift__20dolly_and_strafe_mcsf (460 bytes / 0x1CC, game/files_misc2)
Reference: kelly-slaters-pro-surfer/KS/SRC/mcs.cpp
Confirmed attempts=0 before testing. Prepared the target, then tested exactly one nonempty LF self-contained candidate preserving the exact released do_lift body with minimal local declarations and no unresolved headers.
Result: different, score 8.2609% (38/460 matching bytes; 2/115 matching instructions); candidate size 124 bytes versus target size 460 bytes.
No alternatives, assembly candidate, annotations, variants, retry, attempts 2-5, diff chasing, tracked edits, finalize, integrate, build, commit, or push. This first-pass lane stopped after the single honest test.

## Outcome

The exact released dolly-and-strafe lift body differed at 8.2609% byte score; no source variant was attempted.
