# _M_insert__t8_Rb_tree5Z7stringxZt4pair2ZC7stringxZQ2t5graph4Z7stringxZP6regionZP6portalZt4less1Z7stringx4nodeZt10_Select1st1Zt4pair2ZC7stringxZQ2t5graph4Z7stringxZP6regionZP6portalZt4less1Z7stringx4nodeZt4less1Z7stringxZt12my_allocator1ZQ2t5graph4Z7stringxZP6regionZP6portalZt4less1Z7stringx4nodeP18_Rb_tree_node_baseT1RCt4pair2ZC7stringxZQ2t5graph4Z7stringxZP6regionZP6portalZt4less1Z7stringx4node

- Address: `0x002FC990`
- Size: `0x42C` (1068 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_tree.h`
- Reference source: ``
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 3.839 | 0.0 | `candidate.cpp` |

### Attempt 1 notes

# FIRST PASS wave 170 lane A4

Exact GCC 2 `_Rb_tree::_M_insert` body tested once for `0x002FC990`, from `C:/usr/local/sce/ee/gcc/include/g++-2/stl_tree.h:819-853`, with source-faithful `stringx` layout/comparison from `kelly-slaters-pro-surfer/KS/SRC/stringx.h:230-244,480-483`, released graph node declaration from `kelly-slaters-pro-surfer/KS/SRC/graph.h:28-67`, and the exact `graph<stringx,region*,portal*>` alias from `kelly-slaters-pro-surfer/KS/SRC/iri.h:8`. Attempts before: 0. Result `different`, byte score 3.8390% and instruction score 0.0000%. No alternate was tried.

## Outcome

The exact GCC 2 graph-node map insertion candidate compiled but differed at 3.8390% bytes and 0.0000% instructions; no alternate source was attempted.
