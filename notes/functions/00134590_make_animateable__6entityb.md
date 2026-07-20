# make_animateable__6entityb

- Address: `0x00134590`
- Size: `0x34` (52 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.cpp`
- Reference source: `KS/SRC/entity.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 3.8462 | 0.0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Used the released conditional memset of the ten animation slots. EE GCC converted `memset` into a sibling tail jump, eliminating the target frame and producing 36 bytes.

### Attempt 2 notes

The released ten-slot animation-array check and memset matched exactly with `anim_trees` at offset 0xe8. The trailing empty barrier prevents EE GCC from replacing `memset` with a sibling tail jump.

`KELLY_DECOMP_COMPILER_BARRIER()` is a matching-only annotation that emits no target instruction. It prevents EE GCC from applying the sibling/tail-call or scheduling transformation described above.

## Outcome

The released entity animateable setup matched exactly with the animation-slot memset.
