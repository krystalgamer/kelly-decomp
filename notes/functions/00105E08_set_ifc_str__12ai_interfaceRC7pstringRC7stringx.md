# set_ifc_str__12ai_interfaceRC7pstringRC7stringx

- Address: `0x00105E08`
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

The released setter ignores both const-reference arguments and returns
`false`. Its first candidate matched the same two-instruction false-return
shape as the adjacent getter.

## Outcome

The released string setter ignores both arguments and returns false. The first C++ candidate matched exactly, and the source-integrated ROM retained the target SHA-1.
