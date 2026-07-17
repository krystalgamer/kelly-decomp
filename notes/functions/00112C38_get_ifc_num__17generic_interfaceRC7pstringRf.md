# get_ifc_num__17generic_interfaceRC7pstringRf

- Address: `0x00112C38`
- Size: `0x8` (8 bytes)
- Object: `game/files_ai`
- Debug source: `entity_interface.h`
- Reference source: `KS/SRC/entity_interface.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The inline base implementation returns `false`. Using `float` for
`rational_t` reproduced the `Rf` mangled parameter and matched immediately.

## Outcome

The generic numeric getter is an inline false-returning base implementation. Modeling rational_t as float preserved its signature, matched on the first attempt, and kept the integrated ROM exact.
