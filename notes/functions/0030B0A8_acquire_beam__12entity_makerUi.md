# acquire_beam__12entity_makerUi

- Address: `0x0030B0A8`
- Size: `0x1C` (28 bytes)
- Object: `game/files_misfits`
- Debug source: `C:/KS/SRC/entity_maker.cpp`
- Reference source: `KS/SRC/entity_maker.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

A minimal layout places `entity_cache` at offset four; retaining the result across a barrier preserves the wrapper.

## Outcome

The released `entity_maker::acquire_beam` cache wrapper matched exactly on the first attempt.
