# insert_unique__t8_Rb_tree5ZPCQ220script_library_class8functionZPCQ220script_library_class8functionZt9_Identity1ZPCQ220script_library_class8functionZQ220script_library_class18function_cptr_lessZt12my_allocator1ZPCQ220script_library_class8functionRCPCQ220script_library_class8function

- Address: `0x0010E6F8`
- Size: `0x1B4` (436 bytes)
- Object: `game/files_ai`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_tree.h`
- Reference source: ``
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 41.7431 | 18.4466 | `candidate.cpp` |

### Attempt 1 notes

# 0x0010E6F8 `insert_unique` — LEAN FIRST PASS wave77 B5

- Address: `0x0010E6F8`
- Symbol: `insert_unique__t8_Rb_tree5ZPCQ220script_library_class8functionZPCQ220script_library_class8functionZt9_Identity1ZPCQ220script_library_class8functionZQ220script_library_class18function_cptr_lessZt12my_allocator1ZPCQ220script_library_class8functionRCPCQ220script_library_class8function`
- Size: `0x1B4` (436 bytes)
- Object: `game/files_ai`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_tree.h`
- Released declarations: `kelly-slaters-pro-surfer/KS/SRC/script_library_class.h:17-70`
- Released revision: `7c3ade041cc03409a3114ce3ba4a70053c6e4e3b`
- Attempt: exact GCC 2.95.2 SGI RB-tree `insert_unique` algorithm with the released `function` and `function_cptr_less` declarations reduced to their layout-relevant members
- Test: `env/bin/python tools/function_test.py test 0x0010E6F8`
- Result: `different` — byte score 41.7431, instruction score 18.4466
- Candidate emitted 420 bytes versus the 436-byte target; no variant or retry was attempted.
- Candidate SHA-1: `98f467d4dd51473198b36445080ec3837fa0d0d0`
- Result artifact: `tmp/functions/0010E6F8_insert_unique__t8_Rb_tree5ZPCQ220script_library_class8functionZPCQ220script_library_class8function_ced7e49d65e8/attempt-1/result.json`
- Timing: 2026-07-28T17:48:15.974394Z to 2026-07-28T17:56:45.195147Z (509.212989 seconds)

## Outcome

The exact released script-function set insertion differed at 41.7431% byte score; no source variant was attempted.
