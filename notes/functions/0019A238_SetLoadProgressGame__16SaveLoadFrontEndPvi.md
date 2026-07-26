# SetLoadProgressGame__16SaveLoadFrontEndPvi

- Address: `0x0019A238`
- Size: `0xE8` (232 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/SaveLoadFrontEnd.cpp`
- Reference source: `KS/SRC/ks/SaveLoadFrontEnd.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 33.1897 | 18.9655 | `candidate.cpp` |
| 2 | different | 27.1552 | 12.069 | `candidate.cpp` |
| 3 | different | 28.0172 | 12.069 | `candidate.cpp` |
| 4 | different | 27.1552 | 12.069 | `candidate.cpp` |
| 5 | different | 27.1552 | 12.069 | `candidate.cpp` |

### Attempt 1 notes

Compiled the exact released callback with source-faithful SaveLoad arrays, 104-byte PS2 `saveInfo`, globals, states, and methods. `setCfg` matched at +0x3294, but the target progress field is four bytes later than the released class snapshot. The candidate also omitted two floating hazard nops, used different struct-copy loop registers, mangled SetDState without the target alias, and tail-called StartError.

### Attempt 2 notes

Added the target-build progress padding, bound SetDState to its shipped reuse-mangled symbol, and prevented the final StartError tail call. Calls, offsets, and epilogue now match, but the compiler still omits both floating hazard nops and emits a differently scheduled implicit saveInfo copy loop, leaving the function eight bytes short.

### Attempt 3 notes

Expanded saveInfo assignment into a fixed-register 64-bit copy loop. The compiler introduced extra pointer temporaries and reordered the tail stores/call setup; this did not improve the missing FPU hazard slots or positional agreement.

### Attempt 4 notes

Separated progress/divisor and final-half constants into fixed FPU variables with zero-width constraints. EE GCC emitted the same 224-byte code as attempt 2; the constraints did not create the shipped hazard slots.

### Attempt 5 notes

Separated integer conversion, divisor, and final-half constants with memory scheduling barriers. The compiler again emitted the same 224-byte target-context code as attempts 2 and 4. Five candidates are exhausted; the remaining mismatch is dominated by missing FPU hazard nops and the implicit saveInfo copy schedule.

## Outcome

Deferred after five source-level attempts. The released load-progress callback, target SaveLoad offsets, states, globals, saveInfo copy, and calls are recovered, but three FPU hazard nops and the 104-byte POD copy-loop scheduling cannot be reproduced from source.
