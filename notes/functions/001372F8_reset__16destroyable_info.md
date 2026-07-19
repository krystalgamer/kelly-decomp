# reset__16destroyable_info

- Address: `0x001372F8`
- Size: `0x1C` (28 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.cpp`
- Reference source: `KS/SRC/entity.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The optimized released reset retains flag mask `0xF008` and sets destroy lifetime at offset `0x4` to `1.0f`.

## Outcome

The released `destroyable_info::reset` flag mask and lifetime store matched exactly on the first attempt.
