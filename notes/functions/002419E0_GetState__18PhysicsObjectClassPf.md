# GetState__18PhysicsObjectClassPf

- Address: `0x002419E0`
- Size: `0x44` (68 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/physics.cpp`
- Reference source: `KS/SRC/ks/physics.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 5.8824 | 0.0 | `physics_getstate_candidate.cpp` |
| 2 | different | 30.8824 | 11.7647 | `physics_getstate_candidate.cpp` |
| 3 | different | 30.8824 | 11.7647 | `physics_getstate_candidate.cpp` |
| 4 | matched | 100.0 | 100.0 | `candidate.cpp` |
| 5 | not used | — | — | — |

### Attempt 1 notes

The fast worker did not consult the released source and used a placeholder
that stored only `0.0f`. It did not represent the function's behavior or
layout.

### Attempt 2 notes

The fast worker did not consult the released source and guessed six scalar
members at the target offsets. Although it recovered the values copied, array
indexing let the compiler fold all output addresses instead of advancing the
state pointer as the target does.

### Attempt 3 notes

The fast worker still had not consulted the released source. Post-increment
syntax was tried on the same guessed flat scalar layout, but the compiler again
folded the output addresses and emitted only 52 bytes.

### Attempt 4 notes

The released `KS/SRC/ks/physics.cpp` body was used verbatim after recovering
the declarations from `physics.h`, `ode.h`, `po.h`, and PS2 `algebra.h`.
Preserving the nested `vector3d` members and the 16-byte-aligned 64-byte `po`
placed `pos` at `0x20` and `linMom` at `0x70`; the compiler then retained the
five pointer increments and matched all 68 bytes.

### Attempt 5 disposition

No fifth candidate was compiled because attempt 4 was already an exact match.

## Outcome

The exact released GetState body matched once the real PhysicsObjectClass layout was preserved: PS2 vector3d members place pos at 0x20, while the 16-byte-aligned po places linMom at 0x70. The nested member form also retains the target's output-pointer increment schedule. Attempt 5 was not used because attempt 4 matched exactly.
