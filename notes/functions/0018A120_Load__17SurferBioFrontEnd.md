# Load__17SurferBioFrontEnd

- Address: `0x0018A120`
- Size: `0x4C` (76 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/SurferFrontEnd.cpp`
- Reference source: `KS/SRC/ks/SurferFrontEnd.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 72.3684 | 50.0 | `candidate.cpp` |
| 2 | different | 35.5263 | 15.7895 | `candidate.cpp` |
| 3 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 4 | different | 81.5789 | 60.0 | `candidate.cpp` |
| 5 | different | 53.9474 | 35.0 | `candidate.cpp` |

### Attempt 1 notes

The exact released calls exposed that the shared FEMenu base was eight bytes short and that pragma-suppressed FrontEnd::LoadPanel was not inlined in isolated compilation.

### Attempt 2 notes

After correcting the shared base size, expressing the released inline LoadPanel body directly fixed all object offsets but used a compact one-register schedule.

### Attempt 3 notes

Calling the protected SetPQIndices member through a named FrontEnd pointer was rejected by C++ protected-access rules.

### Attempt 4 notes

Keeping a named FrontEnd subobject while invoking SetPQIndices normally produced the target 48-byte frame and two saved registers, but prologue delay-slot and indirect-call registers remained differently scheduled.

### Attempt 5 notes

A normalized barrier before panel loading disrupted the close schedule rather than selecting the target ordering.

## Outcome

Deferred after five original-style forms; corrected shared multiple-inheritance offsets match, but call scheduling remains different.
