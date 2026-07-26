# WAVE_PerturbReset__Ff

- Address: `0x00377370`
- Size: `0xD4` (212 bytes)
- Object: `game/files_wave`
- Debug source: `C:/KS/SRC/ks/wave.cpp`
- Reference source: `KS/SRC/ks/wave.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 57.0755 | 43.3962 | `candidate.cpp` |
| 2 | different | 64.6226 | 58.4906 | `candidate.cpp` |
| 3 | different | 56.6038 | 45.283 | `candidate.cpp` |
| 4 | different | 56.6038 | 45.283 | `candidate.cpp` |
| 5 | different | 65.566 | 58.4906 | `candidate.cpp` |

### Attempt 1 notes

The released reset flow had several globals bound without adjusted high halves and reloaded the selected duration pointer.

### Attempt 2 notes

Corrected all adjusted globals and pinned the selected perturb/duration registers, reaching 64.6226%.

### Attempt 3 notes

Unpinned local selection shortened the function by two instructions and reduced matching.

### Attempt 4 notes

A normal selected-pointer local retained the same compact schedule.

### Attempt 5 notes

Restored target registers and added a memory scheduling boundary. Best byte score was 65.566%, with the initial selection schedule still different.

## Outcome

Recovered the exact released perturb selection, remaining-time fallback, six-stage start accumulation, and all adjusted global bindings. Five candidates could not reproduce the initial selection schedule; best byte score was 65.566%.
