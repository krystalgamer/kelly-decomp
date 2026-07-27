# nslGetSoundStatus__FUi

- Address: `0x0038DBA0`
- Size: `0xFC` (252 bytes)
- Object: `nsl/nsl_ps2_sound`
- Debug source: `C:/NSL/PS2/nsl_ps2_sound.cpp`
- Reference source: `NSL/PS2/nsl_ps2_sound.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 31.5385 | 18.4615 | `candidate.cpp` |

### Attempt 1 notes

# Attempt 1

- Used the released `nslGetSoundStatus` body verbatim from `kelly-slaters-pro-surfer/NSL/PS2/nsl_ps2_sound.cpp:665-709`.
- Used only the released status enum/ID constants and the authentic PS2 sound/system field layout required by the body, narrowed with existing NSL shared prior art from `src/NSL/PS2/nsl_ps2_sound.cpp:27-33`.
- Result: **different** — byte score 31.5385%, instruction score 18.4615%. No second attempt or diff chase was made.

## Outcome

Exact released nslGetSoundStatus source differed from the target; preserved attempt 1 for the later Sol pass.
