# Load__11OptionsMenu

- Address: `0x00181EF8`
- Size: `0x44` (68 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/MainFrontEnd.cpp`
- Reference source: `KS/SRC/ks/MainFrontEnd.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 83.8235 | 70.5882 | `candidate.cpp` |
| 2 | different | 31.5789 | 5.2632 | `candidate.cpp` |
| 3 | different | 94.1176 | 76.4706 | `candidate.cpp` |
| 4 | different | 94.1176 | 76.4706 | `candidate.cpp` |
| 5 | different | 94.1176 | 76.4706 | `candidate.cpp` |

### Attempt 1 notes

Used the released Load body with source-level modeling of its secondary-base virtual call; behavior matched but two temporary registers were reversed.

### Attempt 2 notes

Bound the secondary subobject to s0; this forced an extra saved register and expanded the function.

### Attempt 3 notes

Inlined the equivalent virtual dispatch in Load; size and all operations matched, but vtable/function temporaries remained reversed.

### Attempt 4 notes

Tried a fixed vtable-entry register without emitting instructions; allocation remained unchanged.

### Attempt 5 notes

Separated function and adjustment loads to expose released evaluation order; allocation remained unchanged.

## Outcome

Deferred after five source-level attempts; the released calls and secondary-base adjustment are established, but two equivalent virtual-dispatch temporaries remain register-swapped.
