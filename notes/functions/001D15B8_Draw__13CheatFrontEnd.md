# Draw__13CheatFrontEnd

- Address: `0x001D15B8`
- Size: `0x44` (68 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/CheatFrontEnd.cpp`
- Reference source: `KS/SRC/ks/CheatFrontEnd.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 2 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Initial abbreviated virtual declarations had an incorrect Draw parameter and did not compile.

### Attempt 2 notes

Corrected the call sites but retained the incorrect declaration.

### Attempt 3 notes

Restored the released void Draw signature and virtual slot, with narrow branch-local barriers for demonstrated tail calls; this matched exactly.

## Outcome

The matching-only branch barriers and abbreviated virtual layout were removed.
The shared released body tail-calls both branch targets, so this wrapper was
deferred rather than retaining compiler-control scaffolding.
