# find_object__C5beachP6entity

- Address: `0x001EAD68`
- Size: `0x34` (52 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/beach.cpp`
- Reference source: `KS/SRC/ks/beach.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 33.9286 | 21.4286 | `candidate.cpp` |
| 2 | different | 33.9286 | 21.4286 | `candidate.cpp` |
| 3 | different | 33.9286 | 21.4286 | `candidate.cpp` |

### Attempt 1 notes

Used a for-loop spelling with the target scheduling nop in the body. This placed the nop before the next-pointer load and changed the successful-return branch shape, growing the function to 56 bytes.

### Attempt 2 notes

Native linked-list search forms omit the target's load-to-branch scheduling
`nop`.

## Outcome

The prior exact form inserted a non-released instruction-emitting `nop`.
That scaffolding was removed and the lookup was deferred.
