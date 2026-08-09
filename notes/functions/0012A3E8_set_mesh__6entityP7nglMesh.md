# set_mesh__6entityP7nglMesh

- Address: `0x0012A3E8`
- Size: `0x3C` (60 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.cpp`
- Reference source: `KS/SRC/entity.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The reconstructed target body matched all 60 function bytes, but declaring the isolated member virtual caused an extra synthetic entity vtable/data emission during full integration, breaking exact ROM identity.

### Attempt 2 notes

The authentic body uses the shared entity declaration, calls
`FixupEntityMesh`, and assigns `my_mesh`.

## Outcome

The standalone mesh declaration was removed.
