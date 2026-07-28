# _$_t7bp_tree2Z10partition3Z8vector3d

- Address: `0x003006E8`
- Size: `0x1AC` (428 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/bp_tree.h`
- Reference source: `KS/SRC/bp_tree.h`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

# 0x003006E8 source-first notes

The exact released implicit `bp_tree<partition3, vector3d>` destructor was
represented once with minimal faithful declarations. The only test failed
during compilation because the isolated compiler could not find `stddef.h`,
`stdlib.h`, or `vector`; score 0.0. The failed attempt is preserved. No retry,
variants, diff chasing, finalization, build, integration, tracked edits, or
commit were performed.

Sources:

- `kelly-slaters-pro-surfer/KS/SRC/bp_tree.h:21-34,244-267`
- `kelly-slaters-pro-surfer/KS/SRC/binary_tree.h:23-35,278-305,435-470`
- `kelly-slaters-pro-surfer/KS/SRC/vector_alloc.h:11-29`
- `kelly-slaters-pro-surfer/KS/SRC/custom_stl.h:422-462`
- `tmp/functions/003006E8__$_t7bp_tree2Z10partition3Z8vector3d/attempt-1/result.json`
- `tmp/functions/003006E8__$_t7bp_tree2Z10partition3Z8vector3d/attempt-1/compiler.stderr`

## Outcome

The exact released partition-tree destructor failed to compile in the isolated bench; no source variant was attempted.
