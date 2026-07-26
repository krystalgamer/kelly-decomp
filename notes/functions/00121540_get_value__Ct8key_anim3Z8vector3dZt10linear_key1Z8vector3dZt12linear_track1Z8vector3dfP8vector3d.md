# get_value__Ct8key_anim3Z8vector3dZt10linear_key1Z8vector3dZt12linear_track1Z8vector3dfP8vector3d

- Address: `0x00121540`
- Size: `0xE4` (228 bytes)
- Object: `game/files_anim`
- Debug source: `C:/KS/SRC/anim.h`
- Reference source: `KS/SRC/anim.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate-2-consolidated.cpp` |

### Attempt 1 notes

Used the exact released arbitrary-time key_anim interpolation body and existing real linear track/key layouts. It matched all 228 bytes and 57 instructions.

### Attempt 2 notes

Revalidated the exact result after moving the released generic get_value template body into anim_shared.h and explicitly instantiating the vector3d specialization.

## Outcome

Matched the exact released arbitrary-time vector3d key animation interpolation after consolidating the generic key_anim get_value template body into the existing animation shared header.
