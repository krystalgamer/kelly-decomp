# get_value__Ct4anim1Z10signal_keyRC14anim_control_tP10signal_key

- Address: `0x00121A88`
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

The control-based `anim<signal_key>` getter is an empty const virtual method.
An explicit specialization matched the complete template signature.

## Outcome

The control-based anim<signal_key> getter is an empty const virtual specialization. The first candidate matched exactly and retained the byte-identical integrated ROM.
