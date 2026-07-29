# insert_unique__t8_Rb_tree5Z7stringxZt4pair2ZC7stringxZUsZt10_Select1st1Zt4pair2ZC7stringxZUsZt4less1Z7stringxZt12my_allocator1ZUsRCt4pair2ZC7stringxZUs

- Address: `0x0035A968`
- Size: `0x258` (600 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_tree.h`
- Reference source: ``
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

# First pass result

Exact GCC `stl_tree.h` `insert_unique` control flow was instantiated for `stringx -> unsigned short` with minimal self-contained declarations. The single LF candidate failed to compile because the GCC 2-era compiler does not accept C++11 braced return construction (`result{...}`). Per first-pass policy, no follow-up candidate was tested.

## Outcome

The exact released string-ushort tree insertion candidate failed to compile with its minimal declarations; no alternate source was attempted.
