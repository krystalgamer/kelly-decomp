# set_ks_controller__21world_dynamics_systemiP22kellyslater_controller

- Address: `0x002A39F0`
- Size: `0x28` (40 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/wds.cpp`
- Reference source: `KS/SRC/wds.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 60.0 | 60.0 | `candidate.cpp` |
| 2 | different | 80.0 | 80.0 | `candidate.cpp` |
| 3 | different | 92.5 | 80.0 | `candidate.cpp` |
| 4 | different | 92.5 | 80.0 | `candidate.cpp` |
| 5 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released array expression preserved the right operations, but EE GCC hoisted the index shift ahead of the stack adjustment and delayed the RA save past address formation.

### Attempt 2 notes

A leading compiler barrier moved both prologue instructions before the index shift; the target keeps the shift between stack adjustment and RA save.

### Attempt 3 notes

Splitting the byte offset around a barrier fixed the prologue schedule, but register allocation formed the adjusted base in `v0` rather than destructively updating `a0`.

### Attempt 4 notes

Anchoring the byte offset on the member array still formed the adjusted base in `v0`; explicit reassignment of a `this`-derived base was needed.

### Attempt 5 notes

A `this`-derived base reassignment preserves the controller array at 0xf8 and the target register schedule. The two empty compiler barriers emit no instructions: the first keeps the index shift between stack adjustment and RA save, and the second prevents a sibling call.

`KELLY_DECOMP_COMPILER_BARRIER()` is a matching-only annotation that emits no target instruction. It prevents EE GCC from applying the sibling/tail-call or scheduling transformation described above.

## Outcome

The released `world_dynamics_system::set_ks_controller` implementation matched exactly.
