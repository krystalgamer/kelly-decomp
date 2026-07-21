# OnL1__17PlaylistMenuClassi

- Address: `0x001B0318`
- Size: `0x40` (64 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FrontEndMenus.cpp`
- Reference source: `KS/SRC/ks/FrontEndMenus.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 87.5 | 87.5 | `candidate.cpp` |
| 2 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 3 | different | 70.3125 | 50.0 | `candidate.cpp` |
| 4 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

A direct source reconstruction emitted the correct body but moved the this-register copy before the return-address save.

### Attempt 2 notes

A raw inline barrier spelling was rejected by the legacy compiler; no target assembly was emitted.

### Attempt 3 notes

A normalized entry barrier over-constrained scheduling and differed.

### Attempt 4 notes

A narrow normalized barrier after setting active preserves the released call behavior and prevents the demonstrated prologue scheduling change.

## Outcome

The released active-state wrapper and virtual up dispatch match with a narrow compiler barrier preventing demonstrated prologue rescheduling.
