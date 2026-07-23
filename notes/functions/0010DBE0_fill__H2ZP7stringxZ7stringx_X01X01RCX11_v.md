# fill__H2ZP7stringxZ7stringx_X01X01RCX11_v

- Address: `0x0010DBE0`
- Size: `0x5C` (92 bytes)
- Object: `game/files_ai`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_algobase.h`
- Reference source: ``
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 63.0435 | 90.4762 | `candidate.cpp` |
| 2 | different | 63.0435 | 90.4762 | `candidate.cpp` |
| 3 | different | 63.0435 | 90.4762 | `candidate.cpp` |
| 4 | different | 63.0435 | 90.4762 | `candidate.cpp` |
| 5 | different | 63.0435 | 90.4762 | `candidate.cpp` |

### Attempt 1 notes

Used the exact released STL fill loop and stringx assignment helper. The compiler omitted two target post-call scheduler nops, producing 84 bytes.

### Attempt 2 notes

Added a non-emitting boundary after assignment. Code generation was unchanged.

### Attempt 3 notes

Used an explicit while iterator. The same 84-byte form remained.

### Attempt 4 notes

Declared the actual stringx assignment operator and used source-level assignment. Code generation remained unchanged.

### Attempt 5 notes

Used a register-qualified for-loop iterator with the actual operator. The target call-latency nops remained absent.

## Outcome

Released stringx fill helper remained blocked by two post-call scheduler nops after five source-level attempts.
