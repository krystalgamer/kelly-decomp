# detach__11entity_anim

- Address: `0x00113A50`
- Size: `0x64` (100 bytes)
- Object: `game/files_anim`
- Debug source: `C:/KS/SRC/entity_anim.cpp`
- Reference source: `KS/SRC/entity_anim.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 32.6923 | 19.2308 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

Read the exact attached flag, entity_anim and entity vtable layouts, clear_flag call, and detach_anim call. Expressing the released bit test directly matched on attempt 2.

## Outcome

Matched entity animation detach
