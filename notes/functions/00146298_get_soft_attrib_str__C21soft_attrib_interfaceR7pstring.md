# get_soft_attrib_str__C21soft_attrib_interfaceR7pstring

- Address: `0x00146298`
- Size: `0x2C` (44 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/soft_attrib_interface.h`
- Reference source: `KS/SRC/soft_attrib_interface.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 27.2727 | 18.1818 | `candidate.cpp` |
| 2 | different | 27.2727 | 18.1818 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The zero-sized pstring model returned a temporary scalar instead of constructing into the hidden return object.

### Attempt 2 notes

The second source spelling retained the same code generation mismatch.

### Attempt 3 notes

With no configured string attributes, the released default constructs the return `pstring` from null.

## Outcome

The released soft-attribute string fallback matched exactly.
