# unload_anim__C6entityRC7stringx

- Address: `0x00133E28`
- Size: `0x38` (56 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.cpp`
- Reference source: `KS/SRC/entity.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released world/ETT-manager forwarding matched exactly. KELLY_DECOMP_COMPILER_BARRIER() narrowly prevents a sibling tail call to unload and emits no target instruction.

`KELLY_DECOMP_COMPILER_BARRIER()` is a matching-only annotation that emits no target instruction. It prevents EE GCC from applying the sibling/tail-call or scheduling transformation described above.

## Outcome

The released entity animation unload matched exactly on the first attempt.
