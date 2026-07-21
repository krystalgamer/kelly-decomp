# SetInitials__6CareerG7stringx

- Address: `0x0025ABB0`
- Size: `0x38` (56 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/career.cpp`
- Reference source: `KS/SRC/ks/career.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 19.6429 | 14.2857 | `candidate.cpp` |
| 2 | different | 55.3571 | 42.8571 | `candidate.cpp` |
| 3 | different | 92.8571 | 85.7143 | `candidate.cpp` |
| 4 | different | 92.8571 | 85.7143 | `candidate.cpp` |
| 5 | different | 55.3571 | 42.8571 | `candidate.cpp` |

### Attempt 1 notes

Modeled `stringx` as a trivial one-pointer value. EE GCC copied the argument into a stack temporary instead of using the target's invisible-reference ABI.

### Attempt 2 notes

Added nontrivial copy-constructor and destructor declarations to recover the pointer-passed by-value ABI. The stores and calls matched, but EE GCC tail-called the parameter destructor and emitted 52 bytes.

### Attempt 3 notes

Used an ABI-named source-level wrapper with an explicit destructor call and empty trailing barrier. Every operation matched, but the compiler saved `s0` before `ra` instead of the target prologue order.

### Attempt 4 notes

Fixed the temporary string pointer to `s0` in the ABI wrapper. The generated prologue retained the same reversed `s0`/`ra` save order.

### Attempt 5 notes

Restored the full two-pointer `stringx` layout and original member-function spelling. The invisible-reference ABI remained correct, but the destructor was still emitted as a tail call.

## Outcome

Five source-level stringx ABI forms could not reproduce both the target's non-tail parameter destruction and exact callee-save prologue order.
