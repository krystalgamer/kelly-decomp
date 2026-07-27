# read_ai_file__12ai_interfaceRC7stringx

- Address: `0x001048D8`
- Size: `0xF8` (248 bytes)
- Object: `game/files_ai`
- Debug source: `C:/KS/SRC/ai_interface.cpp`
- Reference source: `KS/SRC/ai_interface.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 60.0806 | 54.8387 | `candidate.cpp` |

### Attempt 1 notes

Exact released `ai_interface::read_ai_file` body with authentic string, PS2 file, text, stash, and chunk-file layouts. The 400-byte frame and main constructor/open/read/close sequence reproduce, but EE GCC emitted and called an out-of-line implicit `chunk_file` destructor instead of inlining the text-file and os-file member destructors as in the target.

## Outcome

Exact released AI file reader differed in implicit chunk-file destructor inlining.
