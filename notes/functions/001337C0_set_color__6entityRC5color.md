# set_color__6entityRC5color

- Address: `0x001337C0`
- Size: `0xC0` (192 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.cpp`
- Reference source: `KS/SRC/entity.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 2 | different | 83.8542 | 83.3333 | `candidate.cpp` |
| 3 | different | 85.4167 | 83.3333 | `candidate.cpp` |
| 4 | different | 85.4167 | 83.3333 | `candidate.cpp` |
| 5 | different | 81.7708 | 79.1667 | `candidate.cpp` |

### Attempt 3 notes

The exact released diagnostic-string body reached the best score after
binding `error`; only callee-save and two inlined append argument schedules
differed.

### Attempt 5 notes

Empty compiler barriers did not reproduce the target scheduling, and
instruction-emitting assembly is prohibited.

## Outcome

The released non-light diagnostic matched 40 of 48 instructions, but five source-level forms could not reproduce its callee-save and append-call scheduling.
