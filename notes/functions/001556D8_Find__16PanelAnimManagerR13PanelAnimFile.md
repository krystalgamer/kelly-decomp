# Find__16PanelAnimManagerR13PanelAnimFile

- Address: `0x001556D8`
- Size: `0x34` (52 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEAnim.cpp`
- Reference source: `KS/SRC/ks/FEAnim.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 61.5385 | 53.8462 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Used the released linked-list search with recovered `next` and `animation` offsets. All operations matched, but EE GCC omitted the target nop between loading the next event and the branch-likely loop test, producing 48 bytes.

### Attempt 2 notes

The released linked-list search matched with `next` at offset 0x0c and `animation` at 0x64. The explicit instruction-emitting nop reproduces the target load-to-branch scheduling gap after advancing to the next event; it emits precisely the otherwise-missing target instruction.

## Outcome

The released panel-animation event lookup matched exactly with the original list layout.
