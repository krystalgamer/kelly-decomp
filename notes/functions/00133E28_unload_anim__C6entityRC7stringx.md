# unload_anim__C6entityRC7stringx

- Address: `0x00133E28`
- Size: `0x38` (56 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.cpp`
- Reference source: `KS/SRC/entity.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |
| 2 | different | 58.9286 | 57.1429 | `size56-unload-clean.cpp` |
| 3 | different | 58.9286 | 57.1429 | `size56-unload-local.cpp` |

### Attempt 1 notes

An empty trailing compiler barrier prevents the unload call from becoming a
sibling tail call and reproduces the target exactly.

### Attempt 2 notes

The clean world/ETT-manager forwarding omits the barrier. EE GCC emits a
52-byte sibling-call form instead of the target 56-byte frame.

### Attempt 3 notes

Naming the ETT manager as an explicit local retains the same 52-byte
sibling-call form.

## Outcome

The matching-only compiler barrier was removed and the forwarding method was
deferred.
