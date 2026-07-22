# Draw__21SaveCareerPromptClass

- Address: `0x001A7140`
- Size: `0x50` (80 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FrontEndMenus.cpp`
- Reference source: `KS/SRC/ks/FrontEndMenus.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 75.0 | 65.0 | `candidate.cpp` |
| 2 | different | 96.25 | 100.0 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 3 notes

Immutable reference source decrements the positive frame timer, draws the message, then invokes the FEMenu base draw. The shared SaveCareerPrompt and BoxText declarations preserve the recovered member and virtual layouts.

`KELLY_DECOMP_COMPILER_BARRIER()` is a matching-only annotation that emits no target instruction. It prevents EE GCC from applying the sibling/tail-call or scheduling transformation described above.

## Outcome

matched SaveCareerPromptClass Draw
