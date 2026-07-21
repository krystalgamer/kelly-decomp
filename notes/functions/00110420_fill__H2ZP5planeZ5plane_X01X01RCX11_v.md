# fill__H2ZP5planeZ5plane_X01X01RCX11_v

- Address: `0x00110420`
- Size: `0x44` (68 bytes)
- Object: `game/files_ai`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_algobase.h`
- Reference source: ``
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 32.3529 | 0.0 | `candidate.cpp` |
| 2 | different | 26.4706 | 0.0 | `candidate.cpp` |
| 3 | different | 32.3529 | 0.0 | `candidate.cpp` |
| 4 | different | 35.2941 | 5.8824 | `candidate.cpp` |
| 5 | different | 17.6471 | 0.0 | `candidate.cpp` |

### Attempt 1 notes

Used the SDK `fill` loop pattern with the released 16-byte `plane` shape; the incomplete released math declarations made `plane` appear POD and produced paired unaligned 64-bit copies.

### Attempt 2 notes

Added the released `vector3d` member shape and a scalar assignment operator to model the unavailable algebra header; scalar copies appeared, but loop scheduling and size differed.

### Attempt 3 notes

Modeled `plane` assignment explicitly from its released fields; the compiler used a branch-likely loop and still emitted only 64 bytes.

### Attempt 4 notes

Tried the equivalent historical STL post-increment loop form to test iterator scheduling; it remained 64 bytes with a different register allocation.

### Attempt 5 notes

Combined post-increment iteration with explicit released-field assignment; it emitted 60 bytes and did not reproduce the target loop schedule.

## Outcome

Deferred after five source-level SDK/template and released-layout attempts; the unavailable original algebra header leaves a compiler-generated assignment/scheduling difference that cannot be resolved authentically.
