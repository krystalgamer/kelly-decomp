# _$_8KSReplay

- Address: `0x0023AD38`
- Size: `0x50` (80 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/ksreplay.cpp`
- Reference source: `KS/SRC/ks/ksreplay.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

## Outcome

The handwritten compiler-generated destructor packet was removed. The shared
class still lacks enough released layout to reproduce the exact deleting form,
so this destructor was deferred.
