# render__12text_element

- Address: `0x002CACA0`
- Size: `0x1DC` (476 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/element.cpp`
- Reference source: `KS/SRC/element.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 33.4034 | 15.9664 | `candidate.cpp` |

### Attempt 1 notes

FIRST PASS wave89 A1
Target: 0x002CACA0 render__12text_element, 476/0x1DC, game/files_misc2.
Reference: kelly-slaters-pro-surfer/KS/SRC/element.cpp:509-544 (read-only).
Attempts before: 0. Exactly one LF candidate and one harness invocation.
Candidate: exact released function body with minimal faithful self-contained declarations and no project headers.
Result: different; byte score 33.4034% (159/476), instruction score 15.9664% (19/119), candidate size 452.
No alternatives, asm candidate, annotations, variants, retry, attempts 2-5, post-test chasing, tracked edits, finalize, integration, build, or git mutation.
packet=false; tracked_files_changed=false; finalized=false; integrated=false.

## Outcome

The exact released text-element rendering body differed at 33.4034% byte score; no source variant was attempted.
