# set_time__t8key_anim3Z8vector3dZt10linear_key1Z8vector3dZt12linear_track1Z8vector3df

- Address: `0x00121280`
- Size: `0x58` (88 bytes)
- Object: `game/files_anim`
- Debug source: `C:/KS/SRC/anim.h`
- Reference source: `KS/SRC/anim.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Read the exact released key_anim::set_time/sync_key template body, vector3d linear key/track layouts, 16-byte key stride, and object track/current-key offsets. The source-faithful specialization matched byte-exactly.

## Outcome

Matched vector key animation set_time
