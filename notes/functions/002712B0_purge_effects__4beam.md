# purge_effects__4beam

- Address: `0x002712B0`
- Size: `0xBC` (188 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/beam.cpp`
- Reference source: `KS/SRC/beam.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 2 | different | 55.102 | 24.4898 | `candidate.cpp` |
| 3 | different | 55.6122 | 26.5306 | `candidate.cpp` |
| 4 | different | 43.0851 | 21.2766 | `candidate.cpp` |
| 5 | different | 37.5 | 18.0 | `candidate.cpp` |

### Attempt 1 notes

The exact released body did not compile because the shared vector lacked empty().

### Attempt 2 notes

Replacing empty() with iterator comparison reproduced the semantics but used an
extra saved vector register.

### Attempt 3 notes

Correcting the beam-effect vtable offset recovered the virtual delete calls.

### Attempt 4 notes

An explicit vector-layout reconstruction simplified the prologue but changed
the resize arithmetic.

### Attempt 5 notes

Fixed self, vector, and iterator registers expanded the function and did not
reproduce the original vector resize schedule.

## Outcome

Five source-level variants reproduced beam-effect deletion and vector clearing semantics, but the original vector register allocation and resize schedule did not match.
