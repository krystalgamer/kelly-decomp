# _$_Q214PhotoChallenge5Photo

- Address: `0x002626C8`
- Size: `0x48` (72 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/challenge_photo.cpp`
- Reference source: `KS/SRC/ks/challenge_photo.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 61.25 | 50.0 | `candidate.cpp` |
| 2 | different | 61.25 | 50.0 | `candidate.cpp` |
| 3 | different | 60.0 | 50.0 | `candidate.cpp` |
| 4 | matched | 100.0 | 100.0 | `candidate.cpp` |
| 5 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released out-of-line destructor against the shared original Photo declaration generated the correct texture destruction but tail-called automatic deleting destruction, producing 80 bytes.

### Attempt 2 notes

A trailing body barrier did not affect the compiler-generated deleting tail call.

### Attempt 3 notes

After the original-like form failed, an explicit source-level deleting-destructor thunk was tested as the ABI fallback; it still tail-called builtin delete.

### Attempt 4 notes

A branch-local normalized barrier after builtin delete prevented that demonstrated tail-call optimization and matched exactly.

### Attempt 5 notes

The matching thunk was retested using the shared Photo type directly instead of a duplicate layout declaration and remained exact.

## Outcome

Matched with the released destructor behavior expressed as the target ABI deleting thunk; the documented branch-local barrier only prevents the compiler from tail-calling builtin delete.
