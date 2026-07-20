# get_soft_attrib_str__C31character_soft_attrib_interfaceR7pstring

- Address: `0x00313A78`
- Size: `0x2C` (44 bytes)
- Object: `game/files_misfits`
- Debug source: `C:/KS/SRC/soft_attrib_interface.h`
- Reference source: `KS/SRC/soft_attrib_interface.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

With no configured string attribute, the released character interface constructs the hidden return `pstring` from null. The explicit one-word copy constructor preserves the old-GCC hidden-return schedule.

## Outcome

The released character soft-attribute string fallback matched exactly on the first attempt.
