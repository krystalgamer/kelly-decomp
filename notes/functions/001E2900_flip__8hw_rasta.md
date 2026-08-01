# flip__8hw_rasta

- Address: `0x001E2900`
- Size: `0x1C` (28 bytes)
- Object: `game/files_hwosps2`
- Debug source: `C:/KS/SRC/hwosps2/ps2_rasterize.cpp`
- Reference source: `KS/SRC/HWOSPS2/ps2_rasterize.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 7.1429 | 0.0 | `flip-1.cpp` |
| 2 | different | 7.1429 | 0.0 | `flip-2.cpp` |
| 3 | different | 89.2857 | 100.0 | `flip-3.cpp` |

### Attempt 1 notes

Exact released body with the canonical `hw_rasta` declaration. The compiler
tail-calls `nglFlip`, producing 8 bytes instead of the released 28-byte frame.

### Attempt 2 notes

Retried the released body with a standalone native inheritance declaration.
The declaration context did not change the compiler's 8-byte tail call.

### Attempt 3 notes

An ordinary function-pointer call restores the released frame shape, but it is
not the released source and still differs in relocated call bytes. It was not
promoted as a matching-only compiler workaround.

## Outcome

Released direct call tail-calls under the current compiler; compiler barriers and forced symbols were removed, and three native C++ forms did not match.
