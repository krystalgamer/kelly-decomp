# handle_chunk__7ai_goalR10chunk_fileR7stringx

- Address: `0x00106AE8`
- Size: `0x8` (8 bytes)
- Object: `game/files_ai`
- Debug source: `C:/KS/SRC/ai_goals.cpp`
- Reference source: `KS/SRC/ai_goals.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The base `ai_goal` chunk handler is intentionally empty. Forward-declaring
the two reference types preserved the mangled signature, and the empty body
matched immediately.

## Outcome

The released base chunk handler is intentionally empty. Its first minimal C++ definition matched exactly and the integrated target checksum remained unchanged.
