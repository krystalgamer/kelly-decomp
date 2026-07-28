# insert_unique__t8_Rb_tree5ZiZt4pair2ZCiZPQ221world_dynamics_system17surface_type_infoZt10_Select1st1Zt4pair2ZCiZPQ221world_dynamics_system17surface_type_infoZt4less1ZiZt12my_allocator1ZPQ221world_dynamics_system17surface_type_infoRCt4pair2ZCiZPQ221world_dynamics_system17surface_type_info

- Address: `0x002B29B8`
- Size: `0x158` (344 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_tree.h`
- Reference source: ``
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 29.6512 | 2.5 | `candidate.cpp` |

### Attempt 1 notes

FIRST PASS wave 41 B5.

Used the GCC 2.95 SGI `stl_tree.h` `insert_unique(const value_type&)`
algorithm with the released `map<int, world_dynamics_system::surface_type_info*>`
key/value layout and the target `_M_insert` symbol. The sole permitted test
returned `different`: 29.6512% bytes, 2.5% instructions, candidate size 308
versus target size 344. No variants were attempted.

Released declarations:
- `kelly-slaters-pro-surfer/KS/SRC/wds.h:455-465`
- debug source `C:/usr/local/sce/ee/gcc/include/g++-2/stl_tree.h`
- toolchain identity `tools/toolchain/lib/gcc-lib/ee/2.9-ee-991111/`

Artifacts: `candidate.cpp`, `candidate.o`, `candidate.s`, `candidate.bin`,
`assembly.diff`, compiler logs, and `result.json`.

## Outcome

The exact released surface-type RB-tree insertion differed from the target; the sole attempt scored 29.6512%.
