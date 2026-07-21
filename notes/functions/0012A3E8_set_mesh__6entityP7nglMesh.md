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

Kept the same authentic body but omitted `virtual` from the self-contained declaration so the isolated block does not synthesize unrelated vtable data. The function remains byte-exact and the integrated ROM is exact.

## Outcome

The entity mesh setter exactly matches as a source-level FixupEntityMesh call followed by assignment; the standalone declaration avoids unrelated synthetic vtable data.
