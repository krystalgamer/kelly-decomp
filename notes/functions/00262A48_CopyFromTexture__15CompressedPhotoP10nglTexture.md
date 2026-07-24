# CopyFromTexture__15CompressedPhotoP10nglTexture

- Address: `0x00262A48`
- Size: `0x60` (96 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/compressedphoto.cpp`
- Reference source: `KS/SRC/ks/compressedphoto.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 67.7083 | 62.5 | `candidate.cpp` |
| 2 | different | 70.8333 | 62.5 | `candidate.cpp` |
| 3 | different | 70.8333 | 62.5 | `candidate.cpp` |
| 4 | different | 35.4167 | 25.0 | `candidate.cpp` |
| 5 | different | 75.0 | 66.6667 | `candidate.cpp` |

## Outcome

Released PS2 photo compression retained ImageDXTC constructor/prologue scheduling differences after five automatic and explicit lifetime candidates; best score 75%.
