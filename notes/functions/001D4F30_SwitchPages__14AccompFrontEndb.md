# SwitchPages__14AccompFrontEndb

- Address: `0x001D4F30`
- Size: `0x34` (52 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/AccompFrontEnd.cpp`
- Reference source: `KS/SRC/ks/AccompFrontEnd.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 7.6923 | 0.0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Used the released page increment/decrement and UpdatePhotos call. EE GCC converted the final call into a sibling tail jump, eliminating the target frame and producing 28 bytes.

### Attempt 2 notes

The released page adjustment uses the shared accomplishments layout. A local
`UpdatePhotos` pointer preserves the normal call.

## Outcome

The compiler barrier and local layout were removed; the released switch remains
exact.
