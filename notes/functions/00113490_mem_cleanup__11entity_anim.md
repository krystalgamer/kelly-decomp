# mem_cleanup__11entity_anim

- Address: `0x00113490`
- Size: `0x5C` (92 bytes)
- Object: `game/files_anim`
- Debug source: `C:/KS/SRC/entity_anim.cpp`
- Reference source: `KS/SRC/entity_anim.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Read the target static-allocation cleanup behavior and exact entity_anim allocation/data/callback globals plus arch_free helper. The source-level cleanup sequence matched byte-exactly.

## Outcome

Matched entity_anim static memory cleanup
