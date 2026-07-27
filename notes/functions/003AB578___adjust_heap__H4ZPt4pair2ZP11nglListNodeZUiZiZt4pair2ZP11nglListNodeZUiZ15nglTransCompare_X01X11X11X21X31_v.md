# __adjust_heap__H4ZPt4pair2ZP11nglListNodeZUiZiZt4pair2ZP11nglListNodeZUiZ15nglTransCompare_X01X11X11X21X31_v

- Address: `0x003AB578`
- Size: `0x108` (264 bytes)
- Object: `ngl/ngl_ps2`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_heap.h`
- Reference source: ``
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 35.2273 | 19.697 | `candidate.cpp` |

### Attempt 1 notes

Tested exactly one self-contained candidate: the released libstdc++/SGI `stl_heap.h` `__adjust_heap` template definition, instantiated for `pair<nglListNode*, unsigned int>`, `int`, and the owner-source `nglTransCompare`. The candidate was different (35.2273% byte score, 19.697% instruction score; 256 candidate bytes versus 264 target bytes). No variants were attempted.

## Outcome

The exact released NGL heap-adjust helper differed from the target; the sole attempt scored 35.2273%.
