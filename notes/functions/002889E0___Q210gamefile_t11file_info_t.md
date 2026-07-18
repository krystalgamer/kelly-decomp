# __Q210gamefile_t11file_info_t

- Address: `0x002889E0`
- Size: `0x14` (20 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/gamefile.cpp`
- Reference source: `KS/SRC/gamefile.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released constructor null-terminates `sublevel` at offset `0x0`, sets `slot_num` at `0x18` to `-1`, and returns `this`.

## Outcome

The released `gamefile_t::file_info_t` constructor matched exactly on the first attempt.
