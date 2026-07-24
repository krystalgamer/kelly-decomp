# localize_text_safe__FG7stringx

- Address: `0x002EDB88`
- Size: `0x70` (112 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/localize.cpp`
- Reference source: `KS/SRC/localize.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Read the released safe-localization body and exact stringx by-value lock, copy construction, and destruction behavior. Preserving the two released return paths matched on attempt 1.

## Outcome

Matched safe text localization
