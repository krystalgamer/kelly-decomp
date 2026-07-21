# __14entity_triggerRC7stringx

- Address: `0x0028E950`
- Size: `0x40` (64 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/trigger.cpp`
- Reference source: `KS/SRC/trigger.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 98.4375 | 93.75 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The constructor behavior matched except the signed-low vtable address required its carried high alias.

### Attempt 2 notes

Using the carried vtable alias reproduces the base construction, vtable replacement, and FLT_MAX initialization exactly.

## Outcome

The released base construction, vtable replacement, and FLT_MAX hash initialization match exactly.
