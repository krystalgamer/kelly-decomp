# get_lores_mesh__C6entity

- Address: `0x00144F70`
- Size: `0x8` (8 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.h`
- Reference source: `KS/SRC/entity.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The low-resolution mesh pointer is at entity offset `0x130`. The first
layout candidate reproduced the target load.

## Outcome

The low-resolution mesh pointer is stored at entity offset 0x130. The first layout candidate matched exactly and retained the byte-identical integrated ROM.
