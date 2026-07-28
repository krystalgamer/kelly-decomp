# insert_unique__t8_Rb_tree5ZP6regionZP6regionZt9_Identity1ZP6regionZt4less1ZP6regionZt12my_allocator1ZP6regionRCP6region

- Address: `0x002B04E0`
- Size: `0x158` (344 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_tree.h`
- Reference source: ``
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

Attempt 1 used exact released source cited at notes/function_queue.csv:6095; kelly-slaters-pro-surfer/KS/SRC/global.h:84; https://github.com/phracker/MacOSX-SDKs/blob/041600eda65c6a668f66cb7d56b7d1da3e8bcc93/MacOSX10.3.0.sdk/usr/include/gcc/darwin/2.95.2/g%2B%2B/stl_tree.h#L872-L896; tmp/functions/002B04E0_insert_unique__t8_Rb_tree5ZP6regionZP6regionZt9_Identity1ZP6regionZt4less1ZP6regionZt12my_allocato_52ac29c0d246/attempt-1/compiler.stderr:1-8; tmp/functions/002B04E0_insert_unique__t8_Rb_tree5ZP6regionZP6regionZt9_Identity1ZP6regionZt4less1ZP6regionZt12my_allocato_52ac29c0d246/attempt-1/result.json; tmp/source_first/002B04E0/attempt-1.md. Result `compile_failed`, score 0.0000; no later attempt.

## Outcome

The exact released region RB-tree insertion failed the isolated compile because its released include path was unavailable; the sole attempt scored 0%.
