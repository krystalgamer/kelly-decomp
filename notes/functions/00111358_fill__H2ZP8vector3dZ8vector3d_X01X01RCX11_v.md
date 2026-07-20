# fill__H2ZP8vector3dZ8vector3d_X01X01RCX11_v

- Address: `0x00111358`
- Size: `0x38` (56 bytes)
- Object: `game/files_ai`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_algobase.h`
- Reference source: ``
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 31.6667 | 7.1429 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Modeled vector3d as a plain aggregate. EE GCC block-copied each record as an unaligned eight-byte head plus aligned word, producing 60 bytes instead of the released component assignment.

### Attempt 2 notes

The canonical STL fill loop matched exactly after preserving vector3d's memberwise assignment semantics, reproducing the three float loads/stores.

## Outcome

The released vector3d range-fill helper matched exactly.
