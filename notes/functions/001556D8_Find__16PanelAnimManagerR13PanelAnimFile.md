# Find__16PanelAnimManagerR13PanelAnimFile

- Address: `0x001556D8`
- Size: `0x34` (52 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEAnim.cpp`
- Reference source: `KS/SRC/ks/FEAnim.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 61.5385 | 53.8462 | `candidate.cpp` |
| 2 | different | 61.5385 | 53.8462 | `candidate.cpp` |
| 3 | different | 61.5385 | 53.8462 | `candidate.cpp` |

### Attempt 1 notes

Used the released linked-list search with recovered `next` and `animation` offsets. All operations matched, but EE GCC omitted the target nop between loading the next event and the branch-likely loop test, producing 48 bytes.

### Attempt 2 notes

Native linked-list search forms emit 48 bytes and omit the target's
load-to-branch scheduling `nop`.

## Outcome

The prior exact form inserted a non-released instruction-emitting `nop`.
That scaffolding was removed and the lookup was deferred.
