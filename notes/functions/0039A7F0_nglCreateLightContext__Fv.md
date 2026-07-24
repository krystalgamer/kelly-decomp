# nglCreateLightContext__Fv

- Address: `0x0039A7F0`
- Size: `0x7C` (124 bytes)
- Object: `ngl/ngl_ps2`
- Debug source: `C:/NGL/ps2/ngl_ps2.cpp`
- Reference source: `NGL/PS2/ngl_ps2.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 91.129 | 77.4194 | `candidate.cpp` |
| 2 | different | 95.1613 | 93.5484 | `candidate.cpp` |
| 3 | different | 95.1613 | 93.5484 | `candidate.cpp` |
| 4 | different | 95.1613 | 93.5484 | `candidate.cpp` |
| 5 | different | 95.1613 | 93.5484 | `candidate.cpp` |

## Outcome

Deferred the released NGL light-context creation after five source-level attempts; the exact 192-byte layout reached 95.16%, but one loop induction increment remained outside the branch delay slot.
