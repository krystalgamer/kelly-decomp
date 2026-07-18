# __17CurrentSoundEvent

- Address: `0x0031BBB8`
- Size: `0x18` (24 bytes)
- Object: `game/files_script`
- Debug source: `ks/SoundScript.cpp`
- Reference source: `KS/SRC/ks/SoundScript.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The target constructor clears fields at `0x18` and `0x4`, assigns event sentinel `105` at `0x0`, and returns `this`.

## Outcome

The target `CurrentSoundEvent` constructor matched exactly on the first attempt.
