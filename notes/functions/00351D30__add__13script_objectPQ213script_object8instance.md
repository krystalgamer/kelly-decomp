# _add__13script_objectPQ213script_object8instance

- Address: `0x00351D30`
- Size: `0x150` (336 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/script_object.cpp`
- Reference source: `KS/SRC/script_object.cpp`
- Result: **sol_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 2 | different | 19.0476 | 1.1905 | `candidate.cpp` |
| 3 | different | 19.9405 | 3.5714 | `candidate.cpp` |

### Attempt 1 notes

Attempt 1 preserved the exact released script_object::_add body with an initial declaration context and compile failed because the released string constructor declaration was absent.

### Attempt 2 notes

Attempt 2 preserved the exact released body with a revised declaration context, emitted the target symbol, and differed at 19.0476%.

### Attempt 3 notes

Attempt 3 preserved the exact released body with the released free operator+ and string constructor declarations. Its result is recorded here; no further attempt was made.

## Outcome

Three exact-body declaration-context attempts were preserved; the best target-symbol candidate differed at 19.9405%.
