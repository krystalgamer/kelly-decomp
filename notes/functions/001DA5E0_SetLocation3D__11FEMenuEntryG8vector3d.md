# SetLocation3D__11FEMenuEntryG8vector3d

- Address: `0x001DA5E0`
- Size: `0x4C` (76 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEMenu.h`
- Reference source: `KS/SRC/ks/FEMenu.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 2 | different | 23.75 | 0.0 | `candidate.cpp` |
| 3 | different | 23.6842 | 5.2632 | `candidate.cpp` |
| 4 | matched | 100.0 | 100.0 | `candidate.cpp` |

## Attempt notes

The released inline forwarder was preserved.  The shared `TextString` context
was extended with its original virtual order so the `MultiLineString` call uses
the correct slot, and `vector3d` now uses the released component-wise copy
constructor rather than a compiler-generated aggregate copy.

## Outcome

Matched the released FEMenuEntry 3D-location forwarder using shared source-faithful panel, text, and vector declarations.
