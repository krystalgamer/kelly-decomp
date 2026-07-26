# apply_rotation__13ai_locomotionf

- Address: `0x00107D68`
- Size: `0xE8` (232 bytes)
- Object: `game/files_ai`
- Debug source: `C:/KS/SRC/ai_locomotion.cpp`
- Reference source: `KS/SRC/ai_locomotion.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 90.5172 | 96.5517 | `candidate-1-exact-released.cpp` |
| 2 | different | 21.3333 | 6.6667 | `candidate-2-bound-static-storage.cpp` |
| 3 | compile_failed | 0.0 | 0 | `candidate-3-direct-bound-statics.cpp` |
| 4 | different | 96.5517 | 96.5517 | `candidate-4-direct-bound-statics.cpp` |
| 5 | different | 96.5517 | 96.5517 | `candidate-5-named-output-pointers.cpp` |

## Outcome

Deferred after five source-faithful attempts. The exact released rotation arithmetic, static storage addresses, entity transform access, every FPU operation, and target size are recovered; only the independent ra save and cosine-pointer setup instructions are swapped.
