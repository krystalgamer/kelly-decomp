# _$_15WaveScratchBase

- Address: `0x00383DF0`
- Size: `0x30` (48 bytes)
- Object: `game/files_wave`
- Debug source: `C:/KS/SRC/ks/wave.cpp`
- Reference source: `KS/SRC/ks/wave.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 29.1667 | 25.0 | `candidate.cpp` |
| 2 | different | 29.1667 | 25.0 | `candidate.cpp` |
| 3 | different | 29.1667 | 25.0 | `candidate.cpp` |

### Attempt 1 notes

Three native empty-destructor forms collapse to a 36-byte sibling-delete
sequence.

## Outcome

The target frame required a relocation-adjusted manual vtable write and a
compiler barrier. Those matching-only constructs were removed.
