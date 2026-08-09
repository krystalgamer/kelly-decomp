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
| 1 | matched | 100.0 | 100.0 | `size44-shared-accessors.cpp` |

### Attempt 1 notes

With no configured string attribute, the shared character interface and
`pstring` declaration construct the hidden return from null.

## Outcome

The local one-word `pstring` declaration was removed.
