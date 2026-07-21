# get_entity__21world_dynamics_systemRC7stringx

- Address: `0x002A44C8`
- Size: `0x40` (64 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/wds.cpp`
- Reference source: `KS/SRC/wds.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 20.3125 | 6.25 | `candidate.cpp` |
| 2 | different | 93.75 | 87.5 | `candidate.cpp` |
| 3 | different | 84.375 | 81.25 | `candidate.cpp` |
| 4 | different | 93.75 | 87.5 | `candidate.cpp` |
| 5 | different | 25.0 | 12.5 | `candidate.cpp` |

### Attempt 1 notes

The literal const-reference entity identifier forced a stack temporary and used a mismatched helper symbol.

### Attempt 2 notes

The effective scalar identifier ABI matched the body but saved s0 before ra instead of the target order.

### Attempt 3 notes

A barrier after loading the manager moved the manager load ahead of the ra save and reduced the match.

### Attempt 4 notes

A post-identifier barrier retained the two prologue save instructions in the opposite order.

### Attempt 5 notes

The direct nested source expression delayed the manager load until after ID creation and produced a shorter function.

## Outcome

Five source-authentic world entity lookups could not reproduce the target saved-register prologue order.
