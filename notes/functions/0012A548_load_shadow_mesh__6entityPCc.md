# load_shadow_mesh__6entityPCc

- Address: `0x0012A548`
- Size: `0xDC` (220 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.cpp`
- Reference source: `KS/SRC/entity.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 92.7273 | 25.4902 | `candidate.cpp` |
| 2 | different | 90.0 | 27.451 | `candidate.cpp` |
| 3 | different | 86.3636 | 19.6078 | `candidate.cpp` |
| 4 | different | 27.7273 | 20.0 | `candidate.cpp` |
| 5 | different | 90.9091 | 25.4902 | `candidate.cpp` |

### Attempt 1 notes

# Attempt 1

Exact released `entity.cpp` body and the original ascending PS2 fixed-string
zeroing loop. Size matched at `0xDC`; only the two inlined constructor loop
pointer decrements were scheduled before their branches instead of in the
delay slots.

### Attempt 2 notes

# Attempt 2

Used a descending source index for fixed-string zeroing. It retained the
same two loop-delay mismatches and additionally moved the second-loop setup
across the `nglLoadMeshFile` branch delay slot. Result: different,
90.0% bytes, 27.4510% instructions, 220-byte exact size.

### Attempt 3 notes

# Attempt 3

Added a memory-clobbering empty compiler barrier after the exact ascending
loop store. It prevented loop reversal, producing ascending pointer updates
and a worse result: different, 86.3636% bytes, 19.6078% instructions,
220-byte exact size.

### Attempt 4 notes

# Attempt 4

Used an explicit taken-edge decrement and C++ label. The compiler emitted
separate exit and back-edge branches, shrinking the function to 200 bytes.
Result: different, 27.7273% bytes, 20.0% instructions.

### Attempt 5 notes

# Attempt 5

Used a single `do`/`while` back edge with comma-expression decrements. It
kept the exact 220-byte size but did not move the pointer decrements into the
delay slots. Result: different, 90.9091% bytes, 25.4902% instructions.

## Outcome

Deferred after five source-level attempts. The released shadow mesh load reached 92.7273% with exact size; only the two fixed-string zero-fill loop delay slots remained differently scheduled.
