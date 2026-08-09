# set_current_path_graph__12ai_interfaceP10path_graph

- Address: `0x001058A0`
- Size: `0x3C` (60 bytes)
- Object: `game/files_ai`
- Debug source: `C:/KS/SRC/ai_interface.cpp`
- Reference source: `KS/SRC/ai_interface.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 95.0 | 100.0 | `candidate.cpp` |
| 2 | different | 95.0 | 93.3333 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Reconstructed the released inline setter with authentic object offsets. All 15 instructions matched; the isolated unresolved `clear_path` relocation left three call bytes unequal.

### Attempt 2 notes

Added a non-emitting absolute `.equ` after the reconstructed function. The assembler removed the relocation but retained a zero call field because the alias was introduced too late for the generated call.

### Attempt 3 notes

The shared AI interface and locomotion declarations preserve the inline
clear-then-store behavior. The absolute `clear_path` alias resolves the
isolated direct call.

## Outcome

The local AI layouts were removed.
