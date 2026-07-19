# __eq__C12chunk_flavorRC12chunk_flavor

- Address: `0x00336B60`
- Size: `0x20` (32 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/chunkfile.cpp`
- Reference source: `KS/SRC/chunkfile.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The chunk flavor stores its comparison text at offset zero, so the released equality operator forwards both object addresses to `strcmp`.

## Outcome

The released `chunk_flavor` equality operator matched exactly.
