# clear__12EventMapType

- Address: `0x0031BE38`
- Size: `0x34` (52 bytes)
- Object: `game/files_script`
- Debug source: `ks/SoundScript.cpp`
- Reference source: `KS/SRC/ks/SoundScript.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 32.1429 | 14.2857 | `candidate.cpp` |
| 2 | different | 61.5385 | 53.8462 | `candidate.cpp` |
| 3 | policy-invalid | 100.0 | 100.0 | `candidate.cpp` |
| 4 | different | 32.1429 | 14.2857 | `candidate.cpp` |
| 5 | different | 61.5385 | 53.8462 | `candidate.cpp` |

### Attempt 1 notes

Used the released indexed loop. EE GCC recomputed each source address from the index, grew the function to 56 bytes, and did not reproduce the target pointer-induction loop.

### Attempt 2 notes

Used an explicit source pointer. This produced 52 bytes but scheduled index initialization before the initial branch and pointer advancement before the loop test instead of in the branch delay slot.

### Attempt 3 notes

Invalid attempt. It replaced the released C++ loop with the target instruction stream and therefore was not a decompilation.

### Attempt 4 notes

Retested the released source with the original `EventType` and unsigned `nslSourceId` member types. EE GCC still recomputed each indexed address and emitted 56 bytes.

### Attempt 5 notes

Used a source-level pointer-induction loop without compiler controls. It emitted 52 bytes, but EE GCC scheduled initialization and pointer advancement differently from the target.

## Outcome

Deferred after five attempts. The simple source-level implementations preserve the released behavior but do not reproduce the target schedule; no inline assembly is integrated.
