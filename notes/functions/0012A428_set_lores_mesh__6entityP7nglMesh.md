# set_lores_mesh__6entityP7nglMesh

- Address: `0x0012A428`
- Size: `0x3C` (60 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.cpp`
- Reference source: `KS/SRC/entity.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released low-resolution setup uses the shared entity declaration, calls
`FixupEntityMesh`, and assigns `lores_mesh`.

## Outcome

The standalone mesh declaration was removed.
