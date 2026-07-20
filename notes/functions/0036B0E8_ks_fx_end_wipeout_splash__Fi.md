# ks_fx_end_wipeout_splash__Fi

- Address: `0x0036B0E8`
- Size: `0x34` (52 bytes)
- Object: `game/files_wave`
- Debug source: `C:/KS/SRC/ks/ksfx.cpp`
- Reference source: `KS/SRC/ks/ksfx.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 67.3077 | 61.5385 | `candidate.cpp` |
| 2 | policy-invalid | 100.0 | 100.0 | `candidate.cpp` |
| 3 | different | 65.3846 | 53.8462 | `candidate.cpp` |
| 4 | different | 67.3077 | 61.5385 | `candidate.cpp` |
| 5 | different | 67.3077 | 61.5385 | `candidate.cpp` |

### Attempt 1 notes

Used the released two-element wipeout-splash loop. All operations matched, but EE GCC omitted the target nop between the pointer-bound comparison and branch-likely, producing 48 bytes.

### Attempt 2 notes

Invalid attempt. It replaced the released C++ loop with the target instructions.

### Attempt 3 notes

Used explicit splash begin/end pointers in a do-while loop. EE GCC used an unsigned pointer comparison and still omitted the target hazard nop.

### Attempt 4 notes

Used a source-level indexed while loop. It reproduced the released for-loop output: 48 bytes with no nop between the pointer-bound comparison and branch.

### Attempt 5 notes

Materialized the source-level continuation condition before leaving a do-while loop. The optimizer collapsed it to the same 48-byte non-matching loop.

## Outcome

Deferred after five attempts. No source-level reconstruction retained the target compare/branch hazard nop, so the hand-written assembly match was removed.
