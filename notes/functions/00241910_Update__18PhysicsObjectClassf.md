# Update__18PhysicsObjectClassf

- Address: `0x00241910`
- Size: `0xCC` (204 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/physics.cpp`
- Reference source: `KS/SRC/ks/physics.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 22.6415 | 5.8824 | `candidate.cpp` |
| 2 | different | 22.1698 | 5.8824 | `candidate.cpp` |
| 3 | different | 22.1698 | 5.8824 | `candidate.cpp` |
| 4 | different | 21.6981 | 1.9608 | `candidate.cpp` |
| 5 | different | 22.1698 | 5.8824 | `candidate.cpp` |

## Outcome

The released integration flow was recovered, but old-compiler register allocation retained an extra callee-save register and larger stack frame after five source-level attempts.
