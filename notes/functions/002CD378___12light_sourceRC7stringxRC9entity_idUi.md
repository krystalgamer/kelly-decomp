# __12light_sourceRC7stringxRC9entity_idUi

- Address: `0x002CD378`
- Size: `0xD4` (212 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/light.cpp`
- Reference source: `KS/SRC/light.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 35.6481 | 20.3704 | `candidate.cpp` |
| 2 | different | 21.4286 | 1.7857 | `candidate.cpp` |
| 3 | different | 19.6429 | 1.7857 | `candidate.cpp` |
| 4 | different | 71.2264 | 60.3774 | `candidate.cpp` |
| 5 | compile_failed | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

Manually expanded the released filename-plus-suffix expression with exact string helpers and addresses. Temporary placement and call scheduling differed.

### Attempt 2 notes

Pinned the suffix and vtable registers and swapped temporary declaration order, increasing saved-register pressure and code size.

### Attempt 3 notes

Swapped the two string temporaries without pinned vtable state; the compiler used a 128-byte frame and extra saved register.

### Attempt 4 notes

Reconstructed the source-faithful inline string concatenation return path. It recovered target size and reached 71.2264%, but prologue and argument scheduling remained different.

### Attempt 5 notes

Tried the exact derived-class constructor form; the isolated object emitted its own light-source vtable and conflicted with the bound shipped vtable symbol.

## Outcome

The released filename light constructor and source-faithful string concatenation return path recovered target size, temporaries, helpers, and addresses. Five candidates could not reproduce prologue and call-argument scheduling; best byte score was 71.2264%.
