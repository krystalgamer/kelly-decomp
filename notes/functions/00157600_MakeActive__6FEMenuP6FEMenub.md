# MakeActive__6FEMenuP6FEMenub

- Address: `0x00157600`
- Size: `0xB8` (184 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEMenu.cpp`
- Reference source: `KS/SRC/ks/FEMenu.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 16.8478 | 0.0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

The released activation callbacks matched through the existing source-faithful FEMenu layout and virtual order. The shipped two-argument variant independently guards unactivation and activation with its boolean parameter, preserving that value across the first virtual call.

## Outcome

Matched the shipped FEMenu activation variant using the released callback body and shared menu declaration.
