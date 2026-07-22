# Load__14EnterCheatMenu

- Address: `0x001D3160`
- Size: `0x50` (80 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/CheatFrontEnd.cpp`
- Reference source: `KS/SRC/ks/CheatFrontEnd.cpp`
- Result: **sol_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 95.0 | 90.0 | `candidate.cpp` |
| 2 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 3 | different | 77.5 | 75.0 | `candidate.cpp` |

### Attempt 1 notes

Candidate used the immutable `FEMultiMenu::Load(); SetPQIndices();` body and matched the full dual-vtable call sequence. It differed only in EE-GCC prologue save ordering (`s0` before `ra` instead of the target's `ra` before `s0`).

### Attempt 2 notes

Tried a compiler barrier before the immutable calls to alter prologue scheduling. The standalone candidate omitted the generated annotation include and failed compilation; no target behavior was invented.

### Attempt 3 notes

Retried the barrier candidate with the annotation header. The barrier changed register/save scheduling substantially and scored 77.5%, so it did not match. The immutable body remains exact, but the prologue ordering is unresolved.

## Outcome

EnterCheatMenu::Load()
