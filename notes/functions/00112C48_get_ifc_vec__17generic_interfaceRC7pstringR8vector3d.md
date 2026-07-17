# get_ifc_vec__17generic_interfaceRC7pstringR8vector3d

- Address: `0x00112C48`
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

The inline vector getter is another false-returning base fallback. Forward
declarations preserved the reference parameter mangling and matched at once.

## Outcome

The inline generic vector getter is a false-returning fallback. Its first candidate matched exactly and the integrated full-ROM checksum remained unchanged.
