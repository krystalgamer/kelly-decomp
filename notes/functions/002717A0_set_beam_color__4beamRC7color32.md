# set_beam_color__4beamRC7color32

- Address: `0x002717A0`
- Size: `0xC` (12 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/beam.cpp`
- Reference source: `KS/SRC/beam.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released setter loads the color word through the reference and stores `my_color` at offset `0x208`.

## Outcome

The released `beam::set_beam_color` word copy matched exactly on the first attempt.
