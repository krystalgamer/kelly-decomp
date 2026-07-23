# MENU_GetAnalogState__Fi

- Address: `0x00240578`
- Size: `0x54` (84 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/menungl.cpp`
- Reference source: `KS/SRC/ks/menungl.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 54.7619 | 42.8571 | `candidate.cpp` |
| 2 | different | 54.7619 | 42.8571 | `candidate.cpp` |
| 3 | different | 48.8095 | 38.0952 | `candidate.cpp` |
| 4 | different | 54.7619 | 42.8571 | `candidate.cpp` |
| 5 | different | 41.3043 | 21.7391 | `candidate.cpp` |

### Attempt 1 notes

Used the exact released MENU_GetAnalogState body with the shared input manager declaration, device constant, axis midpoint, and exact control-state address. The compiler omitted one target scheduling nop and inverted the equivalent second branch layout.

### Attempt 2 notes

Rewrote the released returns through a single result variable. The compiler retained the same 80-byte form.

### Attempt 3 notes

Expressed the two comparisons as target-shaped negated conditions and constrained the zero float through a non-emitting register barrier. This reproduced the target branch direction but still omitted the scheduling nop.

### Attempt 4 notes

Reconstructed the same released body over a minimal exact input manager declaration and literal midpoint. Code generation remained the same 80-byte form.

### Attempt 5 notes

Made the midpoint volatile to force a distinct materialization. This introduced stack traffic rather than the target scheduler-only nop.

## Outcome

Released MENU_GetAnalogState remained blocked by a scheduler-only nop after five source-level attempts.
