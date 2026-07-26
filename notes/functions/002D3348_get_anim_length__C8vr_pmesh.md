# get_anim_length__C8vr_pmesh

- Address: `0x002D3348`
- Size: `0xD8` (216 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/pmesh.cpp`
- Reference source: `KS/SRC/pmesh.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 27.3148 | 3.7037 | `candidate.cpp` |
| 2 | different | 27.3148 | 3.7037 | `candidate.cpp` |
| 3 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 4 | different | 28.2407 | 3.7037 | `candidate.cpp` |
| 5 | different | 25.463 | 1.8519 | `candidate.cpp` |

### Attempt 1 notes

# Attempt 1

Exact released body with `MAPS_PER_MATERIAL` resolved to 4 and a source-faithful
three-pointer vector/pmesh prefix.

Result: different, 27.3148% bytes, 3.7037% instructions, 204-byte candidate.
The control flow and stack-backed `max` temporaries are correct, but GCC saves
only s0-s5 and uses `sp` directly for `length`; the target preserves an extra
s6 and materializes both `&length` and `&l` in saved registers. Scheduling at
both loop backedges also differs.

### Attempt 2 notes

# Attempt 2

Replaced direct vector field expressions with the released SGI STL forms:
`size_type(end() - begin())` and `*(begin() + index)`.

Result: different, 27.3148% bytes, 3.7037% instructions, 204-byte candidate.
The optimizer emitted byte-identical code to attempt 1.

### Attempt 3 notes

# Attempt 3

Added a zero-instruction register constraint in the inlined `max` helper to
retain `&length`, the one live value missing from attempts 1-2.

Result: compile failed. This old EE GCC parsed `volatile` as an undeclared
identifier when combined with the operand constraint in that spelling.

### Attempt 4 notes

# Attempt 4

Used the compiler-accepted zero-instruction register constraint to retain
`&length` in the inlined `max`.

Result: different, 28.2407% bytes, 3.7037% instructions, 204-byte candidate.
The selection became `sp`/saved `&l` with `movn`, while the target retains
both addresses and selects saved `&l`/saved `&length` with `movz`.

### Attempt 5 notes

# Attempt 5

Retained both `max` argument addresses with zero-instruction register
constraints, attempting to reproduce the target's saved s4/s5 pointer pair and
s6 material count.

Result: different, 25.4630% bytes, 1.8519% instructions, 208-byte candidate.
It added an address move but still saved only s0-s5 and moved farther from the
target. Per the five-attempt limit, testing stopped. Root `candidate.cpp` was
restored to best-scoring attempt 4 without retesting.

## Outcome

Deferred after five source-level attempts. The released animation-length logic and mesh layout were recovered, but all candidates remained dominated by different virtual dispatch, branch, and register scheduling.
