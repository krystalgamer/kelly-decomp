# find__t8_Rb_tree5Z7stringxZt4pair2ZC7stringxZP10scene_animZt10_Select1st1Zt4pair2ZC7stringxZP10scene_animZt4less1Z7stringxZt12my_allocator1ZP10scene_animRC7stringx

- Address: `0x002B6900`
- Size: `0x168` (360 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_tree.h`
- Reference source: ``
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

# Attempt 1 — exact released/toolchain template

- FIRST PASS wave 51 lane A4 for `0x002B6900 find__t8_Rb_tree5Z7stringxZt4pair2ZC7stringxZP10scene_animZt10_Select1st1Zt4pair2ZC7stringxZP10scene_animZt4less1Z7stringxZt12my_allocator1ZP10scene_animRC7stringx`.
- Tested the exact released `map<stringx, scene_anim *>` type with an explicit instantiation of the toolchain-provided `_Rb_tree::find(const stringx&)` template once.
- Result: **compile_failed**, score **0.0%**. The isolated compiler include roots do not provide the toolchain `<map>` header (`map: No such file or directory`).
- Exactly one non-placeholder candidate was tested using `env/bin/python`.
- No variants, retries, diff chasing, build, finalization, integration, tracked-file/tool edits, subagents, lean work, commit, or push were performed.

## Citations

- `kelly-slaters-pro-surfer/KS/SRC/wds.h:24,68`
- `kelly-slaters-pro-surfer/KS/SRC/wds.cpp:8674-8686`
- `tmp/functions/002B6900_find__t8_Rb_tree5Z7stringxZt4pair2ZC7stringxZP10scene_animZt10_Select1st1Zt4pair2ZC7stringxZP10sce_ba75a169a402/attempt-1/compiler.stderr`
- `tmp/functions/002B6900_find__t8_Rb_tree5Z7stringxZt4pair2ZC7stringxZP10scene_animZt10_Select1st1Zt4pair2ZC7stringxZP10sce_ba75a169a402/attempt-1/result.json`

## Outcome

The exact released scene-animation map finder failed the isolated compile because the map header was unavailable; the sole attempt scored 0%.
