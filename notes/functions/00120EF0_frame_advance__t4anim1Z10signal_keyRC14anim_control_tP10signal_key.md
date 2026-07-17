# frame_advance__t4anim1Z10signal_keyRC14anim_control_tP10signal_key

- Address: `0x00120EF0`
- Size: `0x8` (8 bytes)
- Object: `game/files_anim`
- Debug source: `C:/KS/SRC/anim.h`
- Reference source: `KS/SRC/anim.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

An explicit specialization of the empty virtual template method emits the
original GCC 2.9 template mangling without instantiating unrelated methods.

## Outcome

The base anim<signal_key>::frame_advance method is an empty virtual template function. An explicit specialization reproduced the original GCC mangling and exact bytes on the first attempt, with the full ROM checksum unchanged.
