# changeText__10TextStringG7stringx

- Address: `0x001483E0`
- Size: `0x4C` (76 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEPanel.cpp`
- Reference source: `KS/SRC/ks/FEPanel.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 69.7368 | 63.1579 | `candidate.cpp` |
| 2 | different | 69.7368 | 63.1579 | `candidate.cpp` |
| 3 | different | 69.7368 | 63.1579 | `candidate.cpp` |
| 4 | different | 69.7368 | 63.1579 | `candidate.cpp` |
| 5 | different | 69.7368 | 63.1579 | `candidate.cpp` |

### Attempt 1 notes

The exact released body with shared TextString and stringx declarations reproduced all calls and offsets, but EE GCC tail-called the implicit by-value stringx destructor, emitting 72 bytes instead of 76.

### Attempt 2 notes

A normalized empty barrier after assignment occurs before implicit parameter destruction and therefore did not prevent the compiler-generated destructor tail call.

### Attempt 3 notes

Explicitly qualifying MakeReplacements and stringx::operator= preserved the same destructor tail call and 72-byte output.

### Attempt 4 notes

Naming the assignment result did not alter cleanup generation or scheduling.

### Attempt 5 notes

An explicit return after the normalized barrier still places implicit parameter destruction last, so the destructor remained a sibling call. Matching would require non-authentic ABI cleanup control and was rejected.

## Outcome

Deferred after five source-faithful forms; implicit by-value stringx cleanup is tail-called instead of the target call-and-return sequence.
