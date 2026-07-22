# release_stash_bufferspace__5stash

- Address: `0x00347160`
- Size: `0x4C` (76 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/mustash.cpp`
- Reference source: `KS/SRC/mustash.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 71.0526 | 63.1579 | `candidate.cpp` |
| 2 | different | 71.0526 | 63.1579 | `candidate.cpp` |
| 3 | different | 25.0 | 14.2857 | `candidate.cpp` |
| 4 | different | 69.7368 | 57.8947 | `candidate.cpp` |
| 5 | different | 69.7368 | 57.8947 | `candidate.cpp` |

## Outcome

Used immutable mustash.cpp:290-298 and the exact 0x318-byte shared multistash layout. The released loop and a barrier variant omitted retail's post-comparison nop; pointer-loop variants changed control flow. Deferred after five source-only attempts.
