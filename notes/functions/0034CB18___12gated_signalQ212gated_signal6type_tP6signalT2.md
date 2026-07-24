# __12gated_signalQ212gated_signal6type_tP6signalT2

- Address: `0x0034CB18`
- Size: `0x74` (116 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/signal.cpp`
- Reference source: `KS/SRC/signal.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 86.2069 | 72.4138 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

Read the released signal base construction, gated-signal layout, type/flags/input fields, flavor, and vtable. Pinning the vtable and flavor registers matched on attempt 2.

## Outcome

Matched gated signal constructor
