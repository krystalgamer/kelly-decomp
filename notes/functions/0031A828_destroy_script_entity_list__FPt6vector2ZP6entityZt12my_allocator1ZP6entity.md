# destroy_script_entity_list__FPt6vector2ZP6entityZt12my_allocator1ZP6entity

- Address: `0x0031A828`
- Size: `0x100` (256 bytes)
- Object: `game/files_script`
- Debug source: `C:/KS/SRC/script_lib_list.cpp`
- Reference source: `KS/SRC/script_lib_list.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

Exact released body tested once. Compilation failed because the isolated compiler include paths do not provide the released <vector> and <list> headers; no second attempt was made.

## Outcome

The exact released script-entity-list destroyer failed the isolated compile because the released STL headers were unavailable; the sole attempt scored 0%.
