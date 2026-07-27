# get_value__Ct8key_anim3Z10quaternionZt10linear_key1Z10quaternionZt12linear_track1Z10quaternionfP10quaternion

- Address: `0x00121970`
- Size: `0xFC` (252 bytes)
- Object: `game/files_anim`
- Debug source: `C:/KS/SRC/anim.h`
- Reference source: `KS/SRC/anim.h`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | symbol_missing | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

# Attempt 1

- Queue row was pending with zero attempts; no address scratch existed.
- Tested one candidate using the released `key_anim::get_value(time_value_t, animatable_t*)` body, authentic linear key/track and quaternion layouts, disabled assert, and interpolation helper address.
- Result: **different** (tool status `symbol_missing`, score 0.0); no function symbol was emitted. No second attempt or diff chasing was performed.

## Outcome

Exact released quaternion key animation source did not emit the queued specialization; preserved attempt 1 for the later Sol pass.
