# reverse__17beam_effect_color

- Address: `0x002B82F8`
- Size: `0x44` (68 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/beam.h`
- Reference source: `KS/SRC/beam.h`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 36.1111 | 0.0 | `candidate.cpp` |
| 2 | different | 34.7222 | 16.6667 | `candidate.cpp` |
| 3 | different | 36.1111 | 0.0 | `candidate.cpp` |
| 4 | different | 34.7222 | 16.6667 | `candidate.cpp` |
| 5 | different | 91.1765 | 88.2353 | `candidate.cpp` |

### Attempt 1 notes

Used the exact released indexed loop and class members; GCC assigned different loop registers.

### Attempt 2 notes

Staged target and delta pointers after inspecting the diff; loop control grew and still used different registers.

### Attempt 3 notes

Tested an ABI-equivalent source wrapper to remove C++ this-register constraints; allocation remained different.

### Attempt 4 notes

Combined the ABI wrapper with staged pointers; control flow still differed.

### Attempt 5 notes

Changed the staged loop to a countdown while preserving behavior; 15 of 17 instructions matched, but two register assignments remained different.

## Outcome

Deferred after five source-level attempts; the released swaps and delta negations are reconstructed, but the isolated compiler assigns two loop registers differently.
