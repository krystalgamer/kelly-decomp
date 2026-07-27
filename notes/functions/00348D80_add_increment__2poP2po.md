# add_increment__2poP2po

- Address: `0x00348D80`
- Size: `0xE8` (232 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/po.cpp`
- Reference source: `KS/SRC/po.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 66.8103 | 44.8276 | `candidate.cpp` |
| 2 | different | 66.8103 | 44.8276 | `candidate.cpp` |
| 3 | different | 66.3793 | 44.8276 | `candidate.cpp` |
| 4 | different | 8.1395 | 0.0 | `candidate.cpp` |
| 5 | different | 70.6897 | 58.6207 | `candidate.cpp` |

### Attempt 1 notes

Compiled the exact released position-add and source inline VU fast_po_mul body. All VU instructions and matrix offsets matched, but the simplified vector3d constructors let GCC retain source/increment/sum components in `$f0-$f8` across the VU block instead of materializing and reloading the three stack temporaries, shortening the function by three instructions.

### Attempt 2 notes

Added the exact released vector3d copy constructor, scalar constructor body, and assignment operator. Code generation was unchanged: the compiler still kept the summed translation components live in FPRs across the VU inline assembly.

### Attempt 3 notes

Declared `$f0-$f8` clobbered across the released VU inline assembly. GCC moved the live translation sums to `$f10-$f12` instead of reloading them from stack, leaving size and scheduling essentially unchanged.

### Attempt 4 notes

Marked every CPU FPR clobbered. GCC preserved all callee-saved FPRs around the function, expanding it to 344 bytes. This over-constrained variant was discarded.

### Attempt 5 notes

Pinned the six input translation components to the target `$f3-$f8`, attempted to pin the three sums to `$f1/$f2/$f0`, and declared those sum registers clobbered by the released VU block. GCC moved the sums to `$f9-$f11` and kept them live instead of reloading the stack temporaries. This is the best candidate at 164/232 bytes and 34/58 instructions; the VU instruction block itself is exact.

## Outcome

Deferred after five source-level attempts. The released add_increment VU block and layouts are byte-exact, but GCC keeps translation sums live across the inline VU assembly instead of materializing/reloading the three stack temporaries, leaving the function 12 bytes short.
