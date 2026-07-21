# _$_11text_parser

- Address: `0x00242EA8`
- Size: `0x44` (68 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/text_parser.cpp`
- Reference source: `KS/SRC/ks/text_parser.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `text_parser_dtor_candidate.cpp` |
| 2 | compile_failed | 0.0 | 0 | `text_parser_dtor_candidate.cpp` |
| 3 | different | 55.2632 | 47.3684 | `text_parser_dtor_candidate.cpp` |
| 4 | different | 57.8947 | 47.3684 | `candidate.cpp` |
| 5 | different | 94.1176 | 88.2353 | `candidate.cpp` |

### Attempt 1 notes

Started from the released destructor body and reconstructed the released `text_parser` declaration. The isolated candidate did not compile because `text_parser.h` refers to `stringx` without declaring it; the original translation unit obtains that declaration through `global.h`.

### Attempt 2 notes

Tried the exact released include sequence (`global.h`, `text_parser.h`, and `wds.h`) with the released destructor body. The isolated compiler include root does not expose those immutable source headers, so all three includes failed.

### Attempt 3 notes

Added the missing `stringx` forward declaration and the complete released `text_parser` layout: `token[65]`, then pointers at offsets 0x44 and 0x48, `last_val` at 0x4c, `last_val_pos` at 0x50, and `script_line` at 0x54. The released destructor compiled with the correct hidden deleting flag and cleanup call, but EE GCC tail-called `__builtin_delete`, producing 76 bytes instead of the target's 68-byte normal call and shared epilogue.

### Attempt 4 notes

Resolved `cleanup__11text_parser` and `__builtin_delete` to their target addresses and added the established zero-instruction compiler barrier after the released destructor body. The compiler-generated deleting-destructor suffix still occurs after the body barrier, so EE GCC retained the 76-byte sibling-call form.

### Attempt 5 notes

Expressed the recovered GCC deleting-destructor ABI directly: call `cleanup(self)`, test `deleting & 1`, conditionally call scalar `__builtin_delete(self)`, then use the zero-instruction compiler barrier. This recovered the exact 68-byte size and all semantic operations, but scored 94.1176% because the target schedules the first `ra` restore into the conditional branch delay slot and reloads `ra` after deletion, while the isolated wrapper leaves a nop in the delay slot and performs one common restore.

## Outcome

The released text_parser destructor and its 88-byte class layout were recovered, including cleanup(self) and the GCC deleting flag's conditional scalar delete. Five isolated attempts were exhausted; the best 68-byte candidate reached 94.1176% but could not reproduce the target's return-address restore scheduling without prohibited instruction-level intervention, so the function is deferred.
