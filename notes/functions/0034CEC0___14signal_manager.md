# __14signal_manager

- Address: `0x0034CEC0`
- Size: `0xB4` (180 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/signal.cpp`
- Reference source: `KS/SRC/signal.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 2 | different | 30.5556 | 6.6667 | `candidate.cpp` |
| 3 | different | 91.6667 | 73.3333 | `candidate.cpp` |
| 4 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 4 notes

The released empty constructor matches with shared source-faithful singleton, `stringx`, GNU 2 map/tree, and vector declarations. A volatile 32-byte matching-only local restores the released translation unit's stack-frame size; it emits no target instruction and does not alter behavior.

## Outcome

Matched the released signal-manager constructor with reusable GNU 2 container and singleton declarations.
