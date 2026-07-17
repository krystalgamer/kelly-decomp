# get_ifc_str__17generic_interfaceRC7pstringR7stringx

- Address: `0x00112C58`
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

The inline generic string getter is a false-returning fallback. Its first
candidate reproduced the target return sequence.

## Outcome

The inline generic string getter is a false-returning fallback. It matched on the first candidate and preserved the full target ROM checksum after integration.
