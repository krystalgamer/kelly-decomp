# __uninitialized_fill_n_aux__H3ZPQ211render_data11entity_infoZUiZQ211render_data11entity_info_X01X11RCX21G12__false_type_X01

- Address: `0x0010F060`
- Size: `0x30` (48 bytes)
- Object: `game/files_ai`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_uninitialized.h`
- Reference source: ``
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `size48-ai-core.cpp` |

### Attempt 1 notes

The shared render-data entity record and canonical null-guarded placement-fill
loop reproduce the target eight-byte copy.

## Outcome

The render entity-info uninitialized-fill helper matched exactly on the first attempt.
