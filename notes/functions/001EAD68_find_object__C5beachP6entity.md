# find_object__C5beachP6entity

- Address: `0x001EAD68`
- Size: `0x34` (52 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/beach.cpp`
- Reference source: `KS/SRC/ks/beach.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 33.9286 | 21.4286 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Used a for-loop spelling with the target scheduling nop in the body. This placed the nop before the next-pointer load and changed the successful-return branch shape, growing the function to 56 bytes.

### Attempt 2 notes

The released linked-list search matched with `my_objects` at offset 0x2c4, `next` at 0, and the entity pointer at 0x28. The explicit instruction-emitting nop reproduces the target load-to-branch scheduling gap after advancing to the next object.

## Outcome

The released beach object lookup matched exactly with the recovered list layout.
