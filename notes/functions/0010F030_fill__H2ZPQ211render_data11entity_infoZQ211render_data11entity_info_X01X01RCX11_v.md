# fill__H2ZPQ211render_data11entity_infoZQ211render_data11entity_info_X01X01RCX11_v

- Address: `0x0010F030`
- Size: `0x2C` (44 bytes)
- Object: `game/files_ai`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_algobase.h`
- Reference source: ``
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 67.3077 | 81.8182 | `candidate.cpp` |
| 2 | different | 67.3077 | 81.8182 | `candidate.cpp` |
| 3 | different | 67.3077 | 81.8182 | `candidate.cpp` |
| 4 | different | 67.3077 | 81.8182 | `candidate.cpp` |
| 5 | different | 67.3077 | 81.8182 | `candidate.cpp` |

### Attempt 1 notes

The while-loop spelling emitted two extra scheduling nops after the 8-byte aggregate copy.

### Attempt 2 notes

The second source spelling retained the same code generation mismatch.

### Attempt 3 notes

The third loop spelling retained the same instruction schedule.

### Attempt 4 notes

The compact postincrement loop changed the loop semantics/code shape and did not reproduce the target backedge schedule.

### Attempt 5 notes

The fifth source shape still emitted the isolated compiler schedule rather than the target template backedge; the five-attempt limit is exhausted.

## Outcome

Five source loop spellings retained two isolated scheduling nops after the 8-byte copy; best byte score was 67.3077% and best instruction score was 81.8182%.
