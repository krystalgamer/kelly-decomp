# FRButton__FP9MenuEntryi

- Address: `0x00235DE8`
- Size: `0x3C` (60 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/ksdbmenu.cpp`
- Reference source: `KS/SRC/ks/ksdbmenu.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 86.6667 | 86.6667 | `candidate.cpp` |
| 2 | different | 86.6667 | 86.6667 | `candidate.cpp` |
| 3 | different | 86.6667 | 86.6667 | `candidate.cpp` |
| 4 | different | 86.6667 | 86.6667 | `candidate.cpp` |
| 5 | different | 81.6667 | 81.25 | `candidate.cpp` |

### Attempt 1 notes

Used the released debug-flag toggle, but declared nglGetDebugFlag as int. EE GCC normalized logical negation with `sltiu` in the second call delay slot instead of the target bool `xori` schedule.

### Attempt 2 notes

Corrected nglGetDebugFlag to bool, recovering the target `xori`. The compiler still prepared the repeated string argument before the call and placed `xori` in the delay slot, opposite the target's final two-instruction schedule.

### Attempt 3 notes

Separated the negated value into a local before the setter call. Optimization produced the same near-match and retained the argument-preparation order mismatch.

### Attempt 4 notes

Bound the boolean setter argument to a1. The compiler still scheduled the repeated string move before the call and retained `xori` in the delay slot.

### Attempt 5 notes

Wrapped the setter in a source-level inline helper to vary argument evaluation. The compiler emitted an extra instruction and still did not reproduce the target call-delay schedule; five source-only candidates were exhausted.

## Outcome

The released debug-flag toggle was reconstructed with correct calls, value, address, and size, but five source-only variants could not reproduce the target second-call argument scheduling.
