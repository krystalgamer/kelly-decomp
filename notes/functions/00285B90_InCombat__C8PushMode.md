# InCombat__C8PushMode

- Address: `0x00285B90`
- Size: `0x30` (48 bytes)
- Object: `game/files_misc1`
- Debug source: `ks/mode_push.cpp`
- Reference source: `KS/SRC/ks/mode_push.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released predicate scans the two players in the shared `PushMode` layout
and returns true when either `extraShare` value is positive.

## Outcome

The local player-record layout was removed; the released predicate still
matches exactly through the canonical game declaration.
