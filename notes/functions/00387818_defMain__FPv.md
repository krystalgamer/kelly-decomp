# defMain__FPv

- Address: `0x00387818`
- Size: `0x24` (36 bytes)
- Object: `nvl/nvlMPEG_ps2`
- Debug source: `C:/NVL/ps2/nvlMPEG_ps2.cpp`
- Reference source: `NVL/PS2/nvlMPEG_ps2.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 58.3333 | 83.3333 | `candidate.cpp` |
| 2 | different | 72.2222 | 83.3333 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The faithful infinite loop omitted the target three-instruction scheduling gap after each ready-queue rotation.

### Attempt 2 notes

Three source nops left only two before the loop branch because the assembler consumed one while scheduling the branch delay.

### Attempt 3 notes

The released default thread loops forever while rotating the ready queue by one. A documented matching-only four-nop annotation leaves the target three-nop gap after assembler branch-delay scheduling.

## Outcome

The released `defMain` thread loop matched exactly.
