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
| 1 | matched | 100.0 | 100.0 | `size44-item-fill-core.cpp` |

### Attempt 1 notes

The shared signal hierarchy preserves the virtual `raise_signal(USE)` call and
released signal ID 28.

## Outcome

The manual vtable layout was removed.
