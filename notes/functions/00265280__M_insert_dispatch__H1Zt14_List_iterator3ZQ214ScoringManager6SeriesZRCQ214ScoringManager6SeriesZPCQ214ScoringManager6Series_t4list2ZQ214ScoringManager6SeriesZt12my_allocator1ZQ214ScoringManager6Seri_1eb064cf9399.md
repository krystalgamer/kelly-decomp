# _M_insert_dispatch__H1Zt14_List_iterator3ZQ214ScoringManager6SeriesZRCQ214ScoringManager6SeriesZPCQ214ScoringManager6Series_t4list2ZQ214ScoringManager6SeriesZt12my_allocator1ZQ214ScoringManager6SeriesGt14_List_iterator3ZQ214ScoringManager6SeriesZRQ214ScoringManager6SeriesZPQ214ScoringManager6SeriesX00X00G12__false_type_v

- Address: `0x00265280`
- Size: `0xDC` (220 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_list.h`
- Reference source: ``
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 32.7273 | 5.4545 | `candidate-round1.cpp` |
| 2 | different | 36.8182 | 23.6364 | `candidate-round2.cpp` |
| 3 | different | 41.3636 | 21.8182 | `candidate-round3.cpp` |
| 4 | different | 42.7273 | 21.8182 | `candidate-round4.cpp` |
| 5 | different | 43.1818 | 21.8182 | `candidate-round5.cpp` |

### Attempt 1 notes

Instantiated the released range-insert loop with reconstructed list nodes, allocator pool, iterators, Series payload, copy constructor, and inline insertion. Trivial iterator handling removed target temporaries and reduced the body to 176 bytes.

### Attempt 2 notes

Reconstructed the nontrivial iterator base/copy behavior. This recovered the 144-byte frame, position temporary, and result temporary, increasing the candidate to 192 bytes.

### Attempt 3 notes

Added the placement-construction null check and repeated position-iterator reloads used by the target STL expansion. The candidate reached 212 bytes with the linking half instruction-for-instruction aligned.

### Attempt 4 notes

Separated the free-list block from the allocated node so both branch assignments remained explicit. This added the missing allocation-path state and produced 216 bytes, but the allocator prefix still used a different branch layout.

### Attempt 5 notes

Reversed the free-list condition and used an explicit common label to mirror the target refill-first layout. The compiler retained a 216-byte allocation prefix with one instruction missing; this was the best byte score.

## Outcome

Deferred after five source-level attempts. Nontrivial iterator temporaries, placement construction, allocator refill, Series copying, and node linking were recovered, but the inlined allocator prefix remained one instruction shorter with different register scheduling.
