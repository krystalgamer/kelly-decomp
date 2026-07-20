# BeginCombat__15MeterAttackMode

- Address: `0x00286678`
- Size: `0x2C` (44 bytes)
- Object: `game/files_misc1`
- Debug source: `ks/mode_meterattack.cpp`
- Reference source: `KS/SRC/ks/mode_meterattack.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 7.1429 | 0.0 | `candidate.cpp` |
| 2 | different | 50.0 | 27.2727 | `candidate.cpp` |
| 3 | different | 50.0 | 27.2727 | `candidate.cpp` |
| 4 | different | 37.5 | 8.3333 | `candidate.cpp` |
| 5 | different | 59.0909 | 54.5455 | `candidate.cpp` |

### Attempt 1 notes

The first source shape exposed a layout, loop-backedge, or sibling-call mismatch.

### Attempt 2 notes

The second attempt either exposed a candidate-generation syntax error or retained the loop branch schedule mismatch.

### Attempt 3 notes

The signed pointer loop fixed the comparison opcode but still emitted a leading nop and a non-likely backedge.

### Attempt 4 notes

Prefetching the next controller expanded the loop and moved farther from the target.

### Attempt 5 notes

The fifth branch-hinted source still omitted the target leading load schedule and did not produce the original likely backedge; the five-attempt limit is exhausted.

## Outcome

Five source loop shapes could not reproduce the target first-load and likely-backedge schedule; best byte score was 59.0909%.
