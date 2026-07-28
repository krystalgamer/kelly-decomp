# insert_unique__t8_Rb_tree5Z12charstarwrapZt4pair2ZC12charstarwrapZUiZt10_Select1st1Zt4pair2ZC12charstarwrapZUiZt4less1Z12charstarwrapZt23__malloc_alloc_template1i0RCt4pair2ZC12charstarwrapZUi

- Address: `0x0013F330`
- Size: `0x1A4` (420 bytes)
- Object: `game/files_entity`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_tree.h`
- Reference source: ``
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

# FIRST PASS wave 73 lane B1 — 0x0013F330

- Confirmed there were no prior attempts for this target.
- Downloaded the exact GCC 2.95.2 release archive and retained only `libstdc++/stl/stl_tree.h` in scratch (SHA-1 `e391e92fcb22454c9945549ce99221ab6500daa9`).
- Selected the exact released `_Rb_tree::insert_unique(const _Value&)` definition at lines 873-899 and the released game `charstarwrap` declaration.
- Prepared one medium-declaration candidate instantiating `_Rb_tree<charstarwrap, pair<const charstarwrap,unsigned int>, _Select1st<...>, less<charstarwrap>, malloc_alloc>::insert_unique`.
- Ran `function_test` exactly once. Result: `compile_failed`, score 0.0000%; the isolated compiler could not resolve `<map>` or `<string.h>` because default include paths are absent.
- Preserved the attempt and made no retry, variant, diff chase, build, finalization, integration, tracked/reference edit, commit, or push.

## Citations

- `tmp/source_first/0013F330/release/stl_tree.h:873-899`
- `kelly-slaters-pro-surfer/KS/SRC/entityid.h:5-18`
- `notes/function_queue.csv`
- `tmp/functions/0013F330_insert_unique__t8_Rb_tree5Z12charstarwrapZt4pair2ZC12charstarwrapZUiZt10_Select1st1Zt4pair2ZC12cha_6bb81a78b7cd/attempt-1/result.json`
- `tmp/functions/0013F330_insert_unique__t8_Rb_tree5Z12charstarwrapZt4pair2ZC12charstarwrapZUiZt10_Select1st1Zt4pair2ZC12cha_6bb81a78b7cd/attempt-1/compiler.stderr`

## Outcome

The exact released character-map insertion template failed to compile in the isolated bench; no source variant was attempted.
