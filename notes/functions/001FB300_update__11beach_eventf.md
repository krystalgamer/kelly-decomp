# update__11beach_eventf

- Address: `0x001FB300`
- Size: `0x20` (32 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/floatobj.cpp`
- Reference source: `KS/SRC/ks/floatobj.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The shared `beach_event` declaration places the callback and data slot at
0x3c and 0x40, preserving the indirect call ABI.

## Outcome

The exact released callback wrapper matches without a local class shell.
