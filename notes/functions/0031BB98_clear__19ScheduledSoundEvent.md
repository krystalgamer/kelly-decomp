# clear__19ScheduledSoundEvent

- Address: `0x0031BB98`
- Size: `0x20` (32 bytes)
- Object: `game/files_script`
- Debug source: `ks/SoundScript.cpp`
- Reference source: `KS/SRC/ks/SoundScript.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released clear operation restores the invalid sound id, null entity, -1 time, and terminal event enum.

## Outcome

The released `ScheduledSoundEvent::clear` reset matched exactly.
