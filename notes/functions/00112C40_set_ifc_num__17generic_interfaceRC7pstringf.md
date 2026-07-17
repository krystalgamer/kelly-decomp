# set_ifc_num__17generic_interfaceRC7pstringf

- Address: `0x00112C40`
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

The inline numeric setter returns `false` without touching either argument.
The first candidate matched the target return sequence.

## Outcome

The inline generic numeric setter ignores its arguments and returns false. Its first C++ candidate matched exactly and preserved the target ROM checksum.
