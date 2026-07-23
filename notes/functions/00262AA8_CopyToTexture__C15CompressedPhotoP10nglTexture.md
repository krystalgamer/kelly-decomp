# CopyToTexture__C15CompressedPhotoP10nglTexture

- Address: `0x00262AA8`
- Size: `0x58` (88 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/compressedphoto.cpp`
- Reference source: `KS/SRC/ks/compressedphoto.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 69.3182 | 63.6364 | `candidate.cpp` |
| 2 | different | 69.3182 | 63.6364 | `candidate.cpp` |
| 3 | different | 69.3182 | 63.6364 | `candidate.cpp` |
| 4 | different | 69.3182 | 63.6364 | `candidate.cpp` |
| 5 | different | 69.3182 | 63.6364 | `candidate.cpp` |

### Attempt 1 notes

Used the exact released PS2 CopyToTexture body, ImageDXTC local object, texture Data offset, photo blocks, dimensions, and constructor/decompressor/destructor helpers. Prologue and call-argument scheduling differed.

### Attempt 2 notes

Named output/source pointers explicitly. The compiler emitted the same 69.32% schedule.

### Attempt 3 notes

Reconstructed the ImageDXTC lifetime through raw source-level constructor/decompressor/destructor calls. Code generation remained unchanged.

### Attempt 4 notes

Bound photo/texture to s0/s1. The same schedule persisted.

### Attempt 5 notes

Released fixed bindings and used explicit this/dimension casts. The compiler retained the same equivalent prologue/call setup.

## Outcome

Released CompressedPhoto::CopyToTexture remained blocked by equivalent prologue and call-argument scheduling after five source-level attempts.
