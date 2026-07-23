# spawn__15script_callbackP9signaller

- Address: `0x0034BE08`
- Size: `0x58` (88 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/signal.cpp`
- Reference source: `KS/SRC/signal.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 18.1818 | 0.0 | `candidate.cpp` |
| 2 | different | 88.6364 | 63.6364 | `candidate.cpp` |
| 3 | different | 80.6818 | 68.1818 | `candidate.cpp` |
| 4 | different | 95.4545 | 81.8182 | `candidate.cpp` |
| 5 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 5 notes

Read the exact released script_callback::spawn body, disabled/one-shot flags, instance/function/parameter layout, and both nested add_thread overloads. Correcting the parameter/function offsets and branch-local continuations matched on attempt 5.

## Outcome

Matched released script callback spawn
