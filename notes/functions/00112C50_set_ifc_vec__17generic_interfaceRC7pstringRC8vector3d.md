# set_ifc_vec__17generic_interfaceRC7pstringRC8vector3d

- Address: `0x00112C50`
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

The inline vector setter ignores its two const-reference arguments and
returns `false`. It matched on the first candidate.

## Outcome

The inline generic vector setter ignores its arguments and returns false. The first candidate matched exactly and retained the target ROM checksum after integration.
