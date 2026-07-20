# __Q210gamefile_t10cur_data_t

- Address: `0x002889B0`
- Size: `0x24` (36 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/gamefile.cpp`
- Reference source: `KS/SRC/gamefile.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released constructor sets version 1001, clears both hero-name initials, and applies the inlined initialization fields.

## Outcome

The released `gamefile_t::cur_data_t` constructor matched exactly.
