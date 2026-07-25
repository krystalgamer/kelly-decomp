# initialize_mesh_stuff__Fv

- Address: `0x002D37F8`
- Size: `0xB4` (180 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/pmesh.cpp`
- Reference source: `KS/SRC/pmesh.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 86.6667 | 82.2222 | `candidate.cpp` |
| 2 | different | 32.2222 | 31.1111 | `candidate.cpp` |
| 3 | different | 92.2222 | 84.4444 | `candidate.cpp` |
| 4 | different | 92.2222 | 84.4444 | `candidate.cpp` |
| 5 | different | 45.5556 | 20.0 | `candidate.cpp` |

### Attempt 1 notes

The exact released allocation sequence and shared source-faithful mesh element declarations reproduced all allocation sizes and stores; only the initial saved-register, high-address, and first-store scheduling differed.

### Attempt 2 notes

An empty compiler barrier after clearing normal_pool disrupted the full prologue schedule instead of moving only that store.

### Attempt 3 notes

Declaring normal_pool volatile placed its store before the first allocation and improved the match, leaving seven independent prologue scheduling instructions.

### Attempt 4 notes

The released pmesh source line context did not change that schedule.

### Attempt 5 notes

Explicit shared high-address register groups over-constrained the allocator and shortened the function. No local mesh type recreation was retained.

## Outcome

Deferred mesh workspace initialization after five source-level attempts; exact released allocations could not reproduce the original prologue and first-store schedule.
