# ks_fx_spit_going_on__Fv

- Address: `0x0036B600`
- Size: `0x54` (84 bytes)
- Object: `game/files_wave`
- Debug source: `C:/KS/SRC/ks/ksfx.cpp`
- Reference source: `KS/SRC/ks/ksfx.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 41.6667 | 33.3333 | `candidate.cpp` |
| 2 | different | 75.0 | 61.9048 | `candidate.cpp` |
| 3 | different | 75.0 | 61.9048 | `candidate.cpp` |
| 4 | different | 75.0 | 66.6667 | `candidate.cpp` |
| 5 | different | 41.6667 | 33.3333 | `candidate.cpp` |

### Attempt 1 notes

Used the exact released spit timer checks, exact last_spit_start/timer globals, and SPIT_DURATION bits. The compiler placed the first false return inline rather than in the target shared block.

### Attempt 2 notes

Made the shared false label explicit. Branch-likely selection and return-block layout still differed.

### Attempt 3 notes

Expressed the checks as nested positive conditions. The compiler retained a shorter shared-result layout.

### Attempt 4 notes

Used a single bool result and combined condition. The shorter layout remained.

### Attempt 5 notes

Made both false assignments and the final result label explicit. Size matched, but the compiler returned to the original alternate branch layout.

## Outcome

Released ks_fx_spit_going_on remained blocked by equivalent floating branch/return block layout after five source-level attempts.
