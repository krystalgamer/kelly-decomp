# add__6regionP12light_source

- Address: `0x002E7C40`
- Size: `0xE0` (224 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/region.cpp`
- Reference source: `KS/SRC/region.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 52.2321 | 33.3333 | `candidate.cpp` |
| 2 | different | 52.193 | 21.0526 | `candidate.cpp` |
| 3 | different | 53.5714 | 66.6667 | `candidate.cpp` |
| 4 | different | 78.125 | 33.9286 | `candidate.cpp` |
| 5 | different | 59.375 | 75.9259 | `candidate.cpp` |

### Attempt 1 notes

Attempted the exact released `region::add(light_source*)` body with source-faithful region member order, light properties, GCC2 vector/list layouts, `find` tag dispatch, and vector insertion declaration. All released offsets and terrain flag/count instructions matched, but `vector::push_back` was emitted out of line and the unconstrained vector registers/loop schedule shortened the target body.

### Attempt 2 notes

Expanded the released inline `vector::push_back` path and pinned the vector/start/end values to the target saved registers. This recovered the insertion body and exact member offsets, but declaring the vector after the terrain test caused a branch-likely prologue variant, and the null-slot loop retained the known sibling-region hazard schedule.

### Attempt 3 notes

Moved the vector address before the terrain test and shaped the empty/non-empty paths around the target saved registers. The main insertion flow reached 66.67% instruction agreement, but early `$s0` liveness changed the callee-save order and the loop still lacked the target's two hazard nops.

### Attempt 4 notes

Delayed the fixed vector context until after the terrain update and added a context barrier. This reproduced the target prologue, terrain counter, vector address, saved-register order, and exact 224-byte size. A copied initial-end alias added one instruction before the loop, shifting the otherwise close insertion tail.

### Attempt 5 notes

Pinned the source-faithful vector context and return-value alias to the target registers, constrained both iterators before the `find` call, and placed a zero-instruction scheduling barrier after cursor increment. This produced the closest instruction sequence (41/54) and exact target prefix through the null-slot loop entry, but EE GCC still omitted the target's two post-increment hazard nops and chose different call/capacity scheduling. Candidate size was 216 versus 224 bytes.

## Outcome

Deferred after five source-faithful attempts. The released region light insertion body and verified offsets are correct, but the legacy vector null-slot loop and find call retain irreducible register-order and scheduler differences shared with earlier region add functions.
