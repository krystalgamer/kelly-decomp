# apply_effects__4itemP6entity

- Address: `0x0028AA58`
- Size: `0x2C` (44 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/item.cpp`
- Reference source: `KS/SRC/item.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

A minimal vtable layout preserves the virtual effect slot and released effect ID 28.

## Outcome

The released `item::apply_effects` wrapper matched exactly.
