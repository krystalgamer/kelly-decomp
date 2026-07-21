# __13code_callbackPFP9signallerPCc_vPCc

- Address: `0x0034BE70`
- Size: `0x44` (68 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/signal.cpp`
- Reference source: `KS/SRC/signal.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 2 | different | 92.6471 | 100.0 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 3 notes

Used the exact released constructor and signal_callback declaration. The interface pragma preserves external vtables, and correcting the released base-class mangling resolves id_counter exactly.

## Outcome

The released code callback constructor matches exactly.
