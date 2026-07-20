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

The released page adjustment and UpdatePhotos call matched exactly with `cur_page` at offset 0x168. The trailing empty barrier prevents EE GCC from replacing UpdatePhotos with a sibling tail jump.

`KELLY_DECOMP_COMPILER_BARRIER()` is a matching-only annotation that emits no target instruction. It prevents EE GCC from applying the sibling/tail-call or scheduling transformation described above.

## Outcome

The released accomplishments page switch matched exactly.
