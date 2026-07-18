# __7MapData

- Address: `0x0018AF90`
- Size: `0x10` (16 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/Map.cpp`
- Reference source: `KS/SRC/ks/Map.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released constructor clears `num_paths` at `0x8` and `paths` at `0xC`, then returns `this`.

## Outcome

The released `MapData` constructor matched exactly on the first attempt.
