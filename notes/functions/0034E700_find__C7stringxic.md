# find__C7stringxic

- Address: `0x0034E700`
- Size: `0x50` (80 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/stringx.cpp`
- Reference source: `KS/SRC/stringx.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 38.75 | 15.0 | `candidate.cpp` |
| 2 | different | 38.75 | 20.0 | `candidate.cpp` |
| 3 | different | 38.75 | 15.0 | `candidate.cpp` |
| 4 | different | 27.381 | 9.5238 | `candidate.cpp` |
| 5 | different | 38.75 | 15.0 | `candidate.cpp` |

### Attempt 1 notes

Used the exact released find(pos,char) loop and source-faithful stringx/string_buf offsets. The compiler retained the buffer pointer and reloaded char_length inside the loop, producing 76 bytes.

### Attempt 2 notes

Cached char_length in a source local. The compiler shortened the loop to 72 bytes and still did not reproduce the released register transfer and load-delay nop.

### Attempt 3 notes

Made the buffer pointee const while retaining the released loop. Code generation remained the same 76-byte shape as attempt 1.

### Attempt 4 notes

Expanded the released loop into an explicit early exit and do-loop with a cached bound. The compiler chose a different 84-byte control-flow layout.

### Attempt 5 notes

Made char_length const in the reconstructed declaration and restored the exact released loop. The compiler still retained the 76-byte reload form.

## Outcome

Released stringx::find(pos,char) did not reproduce the target bound-caching and loop schedule after five source-level attempts.
