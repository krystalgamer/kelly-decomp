# _M_insert__t8_Rb_tree5Z7stringxZt4pair2ZC7stringxZP11entity_poolZt10_Select1st1Zt4pair2ZC7stringxZP11entity_poolZt4less1Z7stringxZt12my_allocator1ZP11entity_poolP18_Rb_tree_node_baseT1RCt4pair2ZC7stringxZP11entity_pool

- Address: `0x003116C8`
- Size: `0x428` (1064 bytes)
- Object: `game/files_misfits`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_tree.h`
- Reference source: ``
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 3.8534 | 0.0 | `candidate.cpp` |

### Attempt 1 notes

# FIRST PASS wave 169 lane B5

Exact released GCC 2 `_Rb_tree::_M_insert` source tested once for `0x003116C8`, from `C:/usr/local/sce/ee/gcc/include/g++-2/stl_tree.h:819-853`, with authentic `stringx` layout/comparison from `kelly-slaters-pro-surfer/KS/SRC/stringx.h:230-244,480-483` and the `map<stringx, entity_pool*>` declaration from `kelly-slaters-pro-surfer/KS/SRC/entity_maker.h:15-35`. Attempts before: 0. Result `different`, byte score 3.8534% and instruction score 0.0000%. No alternate was tried.

## Outcome

The exact released GCC 2 entity-pool map insertion candidate compiled but differed at 3.8534% bytes and 0.0000% instructions; no alternate source was attempted.
