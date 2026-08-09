# __9vm_symbol

- Address: `0x003541A0`
- Size: `0x34` (52 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/vm_symbol.cpp`
- Reference source: `KS/SRC/vm_symbol.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released two `stringx` default constructions and zero offset initialization
use the shared VM symbol declaration.

## Outcome

The released constructor remains exact through the shared declaration.
