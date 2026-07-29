# _M_insert_aux__t6vector2Z16ai_polypath_nodeZt12my_allocator1Z16ai_polypath_nodeP16ai_polypath_nodeRC16ai_polypath_node

- Address: `0x0010FDC8`
- Size: `0x258` (600 bytes)
- Object: `game/files_ai`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_vector.h`
- Reference source: ``
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 16.3333 | 0.6849 | `candidate.cpp` |

### Attempt 1 notes

# FIRST PASS wave114 B4 0x0010FDC8

Exact GCC 2.95.3 `vector::_M_insert_aux(iterator, const T&)` source from
`libstdc++/stl/stl_vector.h`, instantiated for `ai_polypath_node` with
`my_allocator`. The single LF-only candidate uses minimal self-contained
declarations.

Result: different, 16.3333% bytes and 0.6849% instructions; emitted 500 versus
600 target bytes. Attempts before: 0. No follow-up, build, git operation, or
tracked edit.

## Outcome

The exact released AI polypath-node vector insertion body differed at 16.3333% byte score; no source variant was attempted.
