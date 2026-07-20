# to_stringx__C12chunk_flavor

- Address: `0x00336B30`
- Size: `0x2C` (44 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/chunkfile.cpp`
- Reference source: `KS/SRC/chunkfile.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 38.6364 | 27.2727 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

The released body constructs `stringx(flavor)` with the default `-1` length. Restoring the one-word `stringx` copy constructor preserves the hidden return object instead of returning a scalar temporary.

## Outcome

The released `chunk_flavor::to_stringx` implementation matched exactly on attempt two.
