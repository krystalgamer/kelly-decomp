# strdupcpp__FPCc

- Address: `0x00130DF0`
- Size: `0x58` (88 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.cpp`
- Reference source: `KS/SRC/entity.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 90.9091 | 90.9091 | `candidate.cpp` |
| 2 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 3 | different | 90.9091 | 90.9091 | `candidate.cpp` |
| 4 | different | 22.8261 | 8.6957 | `candidate.cpp` |
| 5 | different | 90.9091 | 90.9091 | `candidate.cpp` |

### Attempt 1 notes

Used the exact released strdupcpp body with strlen/strcpy, vector-new helper, source file string, and zero alignment/line arguments. Only the s0/s1/ra prologue schedule differed (90.91%).

### Attempt 2 notes

Expressed allocation through the source-level placement new[] overload, but defining an inline forwarding overload collided with the absolute allocator symbol and failed assembly.

### Attempt 3 notes

Declared the exact external operator new[] overload and used the released NEW expression. The same 90.91% prologue schedule remained.

### Attempt 4 notes

Constrained the source pointer to s0 through a non-emitting operand boundary. This added an explicit argument move and grew the function.

### Attempt 5 notes

Used a separate register-qualified source local while preserving the original strlen argument. The compiler returned to the 90.91% alternate save/copy schedule.

## Outcome

Released strdupcpp remained blocked by an equivalent callee-save prologue schedule after five source-level attempts.
