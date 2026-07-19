# render__11visual_itemP6camerafUif

- Address: `0x0028B1E8`
- Size: `0x1C` (28 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/item.cpp`
- Reference source: `KS/SRC/item.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

With debug and disabled owner code removed, the released method forwards all arguments to `entity::render`.

## Outcome

The released `visual_item::render` forwarding wrapper matched exactly on the first attempt.

## Matching-only annotation

`KELLY_DECOMP_COMPILER_BARRIER()` is not recovered original source and emits
no instruction. The source-faithful wrapper was otherwise eligible for EE GCC
sibling-call or scheduling changes; the annotation preserves the target's
normal call/return ordering.
