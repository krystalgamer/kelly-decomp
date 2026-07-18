# set_flag__t4anim1Z10quaternion12anim_flags_t

- Address: `0x00120E00`
- Size: `0x10` (16 bytes)
- Object: `game/files_anim`
- Debug source: `C:/KS/SRC/anim.h`
- Reference source: `KS/SRC/anim.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released template ORs the requested flag into the halfword `flags` field at offset `0x0`.

## Outcome

The released `anim<quaternion>::set_flag` halfword update matched exactly on the first attempt.
