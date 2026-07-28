# Select__16OptionsMenuClassi

- Address: `0x001A95D8`
- Size: `0x188` (392 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FrontEndMenus.cpp`
- Reference source: `KS/SRC/ks/FrontEndMenus.cpp`
- Result: **sol_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 2 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 3 | different | 37.7551 | 30.6122 | `candidate-attempt3.cpp` |

### Attempt 1 notes

# Attempt 1

Exact released body with minimal declarations. Compilation failed because the
sound-manager wrapper and absolute declaration both emitted
`pause__18SoundScriptManager`.

### Attempt 2 notes

# Attempt 2 — infrastructure repair

The function body is identical to attempt 1. Only external wrapper declaration
names were repaired. The legacy assembler still reported duplicate
`pause__18SoundScriptManager`; no further attempts were made.

### Attempt 3 notes

Attempt 3 preserved the exact released body with a corrected declaration-only SoundScriptManager context. It emitted the target symbol and differed at 37.7551% bytes and 30.6122% instructions. The accidental three-attempt history is preserved honestly; no further attempt was made.

## Outcome

Three exact released-body declaration contexts were preserved honestly; the emitted target symbol differed at 37.7551% byte score.
