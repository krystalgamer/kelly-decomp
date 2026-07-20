# render__4itemP6camerafUif

- Address: `0x0028A1B8`
- Size: `0x28` (40 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/item.cpp`
- Reference source: `KS/SRC/item.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 97.5 | 90.0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The empty base occupies four bytes under this compiler, so a 0x218-byte derived padding field placed `count` at 0x21c instead of the target 0x218.

### Attempt 2 notes

A minimal layout places `count` at 0x218 and preserves the released conditional base render call.

`KELLY_DECOMP_COMPILER_BARRIER()` is a matching-only annotation that emits no target instruction. It prevents EE GCC from applying the sibling/tail-call or scheduling transformation described above.

## Outcome

The released `item::render` implementation matched exactly.
