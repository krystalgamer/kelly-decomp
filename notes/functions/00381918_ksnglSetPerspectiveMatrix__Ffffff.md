# ksnglSetPerspectiveMatrix__Ffffff

- Address: `0x00381918`
- Size: `0x2C` (44 bytes)
- Object: `game/files_wave`
- Debug source: `C:/KS/SRC/ks/ksngl.cpp`
- Reference source: `KS/SRC/ks/ksngl.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 18.1818 | 18.1818 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `size44-platform-final.cpp` |

### Attempt 2 notes

The released wrapper supplies default Z range 0..1 and zero render dimensions to the full NGL perspective call. The trailing empty compiler barrier prevents a sibling call.

### Attempt 3 notes

A local function pointer preserves the normal NGL call without a compiler
barrier.

## Outcome

The compiler barrier was removed.
