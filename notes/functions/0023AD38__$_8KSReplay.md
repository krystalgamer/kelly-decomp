# _$_8KSReplay

- Address: `0x0023AD38`
- Size: `0x50` (80 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/ksreplay.cpp`
- Reference source: `KS/SRC/ks/ksreplay.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

## Outcome

Immutable KSReplay destructor packet reproduced the term-message initialization, Term call, deleting flag path, and compiler-generated delete ABI exactly.
