# __10anim_maker

- Address: `0x0011DDD0`
- Size: `0x14` (20 bytes)
- Object: `game/files_anim`
- Debug source: `C:/KS/SRC/anim_maker.cpp`
- Reference source: `KS/SRC/anim_maker.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The target constructor installs the `anim_maker` virtual-table pointer at offset `0x0`; a local absolute equate models the compiler-generated vptr store.

## Outcome

The target `anim_maker` constructor vptr initialization matched exactly on the first attempt.
