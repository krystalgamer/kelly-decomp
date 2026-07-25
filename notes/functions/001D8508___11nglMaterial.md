# __11nglMaterial

- Address: `0x001D8508`
- Size: `0xB4` (180 bytes)
- Object: `game/files_frontend`
- Debug source: `../../ngl/ps2/ngl_ps2.h`
- Reference source: `NGL/PS2/ngl_ps2.h`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 63.3333 | 10.8108 | `candidate.cpp` |
| 2 | different | 63.3333 | 10.8108 | `candidate.cpp` |
| 3 | different | 32.7778 | 2.7027 | `candidate.cpp` |
| 4 | different | 63.3333 | 10.8108 | `candidate.cpp` |
| 5 | different | 63.3333 | 10.8108 | `candidate.cpp` |

### Attempt 1 notes

The implicit constructor generated from the exact released nglMaterial and nglFixedString declarations reproduced all four zeroing loops and target size, but hoisted three later member addresses and scheduled each pointer decrement before its loop branch.

### Attempt 2 notes

Writing the same four released fixed-string loops explicitly produced the identical register allocation and loop schedule.

### Attempt 3 notes

Binding the detail and environment member addresses to target argument registers reduced size and moved farther from the generated constructor.

### Attempt 4 notes

Restoring the implicit constructor with the released header line context did not alter code generation.

### Attempt 5 notes

Memory-only barriers between explicit member loops did not prevent address hoisting or move pointer decrements into the target delay slots. No instruction-emitting assembly was used.

## Outcome

Deferred the generated NGL material constructor after five source-level attempts; exact released declarations reproduced the loops but not original address hoisting and delay-slot scheduling.
