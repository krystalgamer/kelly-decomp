# attach__11entity_animRC14anim_control_t

- Address: `0x00113860`
- Size: `0x1F0` (496 bytes)
- Object: `game/files_anim`
- Debug source: `C:/KS/SRC/entity_anim.cpp`
- Reference source: `KS/SRC/entity_anim.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 19.3548 | 2.4194 | `candidate.cpp` |

### Attempt 1 notes

FIRST PASS wave91 B5

Target: 0x00113860 attach__11entity_animRC14anim_control_t
Size/object: 496 (0x1F0), game/files_anim
Reference: kelly-slaters-pro-surfer/KS/SRC/entity_anim.cpp
Confirmed attempts0 before testing.

Attempt 1: different
Byte score: 19.3548% (96/496)
Instruction score: 2.4194% (3/124)
Candidate size: 472 bytes
Target size: 496 bytes
Candidate SHA-1: e24fbec59374d2c0f7e29f9d13d4e2192d1c3e7a

The candidate is LF-only and self-contained, uses the exact released function
body with minimal faithful declarations, and includes no headers.

Exactly one candidate and one harness invocation were used. No alternate,
assembly, annotations, variants, retry, attempts 2-5, or post-test chase.
Tracked/reference files remained read-only. No finalize, integrate, build, or
git mutation.

Full packet: false
Tracked: false
Finalized: false
Integrated: false

## Outcome

The exact released entity-animation attachment body differed at 19.3548% byte score; no source variant was attempted.
