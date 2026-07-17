# set_ifc_str__17generic_interfaceRC7pstringRC7stringx

- Address: `0x00112C60`
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

The inline generic string setter ignores both const references and returns
`false`. The first candidate matched both instructions.

## Outcome

The inline generic string setter ignores both references and returns false. Its first candidate matched byte-for-byte and retained the target ROM checksum after integration.
