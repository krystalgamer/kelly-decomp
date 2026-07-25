# parse_params__14surfing_objectPPci

- Address: `0x00200100`
- Size: `0x90` (144 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/floatobj.cpp`
- Reference source: `KS/SRC/ks/floatobj.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 60.4167 | 47.2222 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

The released surfing-object parser matched after modeling the pointer-to-member function as a packed eight-byte descriptor, preserving the target unaligned copy.

## Outcome

The released surfing-object parameter parser matched exactly on the second attempt.
