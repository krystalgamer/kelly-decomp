# clear__10string_buf

- Address: `0x0034D358`
- Size: `0x28` (40 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/stringx.cpp`
- Reference source: `KS/SRC/stringx.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 17.5 | 10.0 | `candidate.cpp` |
| 2 | different | 92.5 | 100.0 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The direct void call was converted into a sibling jump; a zero-instruction compiler barrier is required after `memset`.

### Attempt 2 notes

The control flow and opcodes matched, but the C++ declaration left a relocation against the mangled memset name instead of resolving the target C symbol.

### Attempt 3 notes

A minimal layout preserves the data pointer and 8-byte block count used by the released zero fill; a matching-only empty barrier prevents a sibling jump to `memset`.

`KELLY_DECOMP_COMPILER_BARRIER()` is a matching-only annotation that emits no target instruction. It prevents EE GCC from applying the sibling/tail-call or scheduling transformation described above.

## Outcome

The released `string_buf::clear` implementation matched exactly.
