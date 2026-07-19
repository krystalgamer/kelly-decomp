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

A minimal layout places the callback at 0x3c and its data slot at 0x40, preserving the indirect call ABI.

## Outcome

The released `beach_event::update` callback wrapper matched exactly.
