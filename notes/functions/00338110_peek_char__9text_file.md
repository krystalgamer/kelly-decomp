# peek_char__9text_file

- Address: `0x00338110`
- Size: `0x24` (36 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/textfile.cpp`
- Reference source: `KS/SRC/textfile.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 86.1111 | 55.5556 | `candidate.cpp` |
| 2 | different | 88.8889 | 77.7778 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The first accessor assigned the index and buffer to the opposite registers from the target branch-likely sequence.

### Attempt 2 notes

Register binding fixed the final address calculation but still loaded the buffer in the branch delay before the index.

### Attempt 3 notes

A minimal layout preserves the buffer, index, and pushed-character fields used by the released branch-likely accessor.

## Outcome

The released `text_file::peek_char` implementation matched exactly.
