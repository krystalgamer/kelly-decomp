# Draw__15PhotoSelectMenu

- Address: `0x001CEC48`
- Size: `0xE4` (228 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/PhotoFrontEnd.cpp`
- Reference source: `KS/SRC/ks/PhotoFrontEnd.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 2 | different | 98.2456 | 94.8276 | `candidate.cpp` |
| 3 | different | 98.2456 | 96.4912 | `candidate.cpp` |
| 4 | different | 98.2456 | 96.4912 | `candidate.cpp` |
| 5 | compile_failed | 0.0 | 0 | `candidate.cpp` |

## Outcome

Deferred after five source-faithful attempts. The released photo-menu draw body reproduces every object offset, virtual dispatch, call, and epilogue instruction; only the independent order of the ra and s0 prologue saves differs, which cannot be controlled from released source.
