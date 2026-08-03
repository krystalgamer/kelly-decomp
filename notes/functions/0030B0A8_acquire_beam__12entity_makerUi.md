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

The shared `entity_maker` declaration places the released `entity_cache`
member at offset four. Returning the cache result naturally retains the frame.

## Outcome

The exact released wrapper matches without a local class or compiler barrier.
