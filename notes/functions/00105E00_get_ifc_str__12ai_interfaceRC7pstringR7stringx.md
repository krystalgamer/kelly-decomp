# get_ifc_str__12ai_interfaceRC7pstringR7stringx

- Address: `0x00105E00`
- Size: `0x8` (8 bytes)
- Object: `game/files_ai`
- Debug source: `C:/KS/SRC/ai_interface.cpp`
- Reference source: `KS/SRC/ai_interface.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released accessor ignores both reference arguments and returns `false`.
Forward declarations are sufficient to preserve the original C++ signature.

## Outcome

The released string accessor ignores its arguments and returns false. The first self-contained C++ candidate matched byte-for-byte, and the integrated ROM checksum remained exact.
