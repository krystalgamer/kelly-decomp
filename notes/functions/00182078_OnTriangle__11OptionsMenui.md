# OnTriangle__11OptionsMenui

- Address: `0x00182078`
- Size: `0x7C` (124 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/MainFrontEnd.cpp`
- Reference source: `KS/SRC/ks/MainFrontEnd.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 78.2258 | 74.1935 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

The released triangle handling matched after restoring the nominal SoundScriptManager address and preventing the final RumbleOn tail call.

`KELLY_DECOMP_COMPILER_BARRIER()` is a matching-only annotation that emits no target instruction. It prevents EE GCC from applying the sibling/tail-call or scheduling transformation described above.

## Outcome

The released options-menu triangle handler matched exactly on the second attempt.
