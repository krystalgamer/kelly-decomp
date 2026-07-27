# _$_13entity_widget

- Address: `0x002B9A10`
- Size: `0x108` (264 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/widget_entity.cpp`
- Reference source: `KS/SRC/widget_entity.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

# Attempt 1 — `_$_13entity_widget` (`0x002B9A10`)

- Released body copied exactly from `KS/SRC/widget_entity.cpp:78-86` (using `0` for the `NULL` macro).
- Declarations model the released `entity_widget` member order (`ent`, `anims`), the three-pointer vector representation, `my_allocator` free-list deallocation, `entity_maker::destroy_entity`, and virtual `widget` destruction.
- Exact supporting declarations: `KS/SRC/widget_entity.h:21-65`, `KS/SRC/entity_maker.h:79-80,114`, `KS/SRC/custom_stl.h:230-249,422-462`, and `KS/SRC/widget.h:173-232`.
- `function_test` was run exactly once. It failed compilation because this GCC does not recognize `__builtin_memmove`; no variant or follow-up test was attempted.
- Candidate SHA-1: `4a5b37088dd7b36d976eb80f668e7aa6f1cee187`
- Candidate SHA-256: `7030574458d68b883ccf3dbcc2d1cf39ccad5bee647c335b500ca0044730de3d`
- Timing: 2026-07-27T12:39:10.646626Z to 2026-07-27T12:39:12.685664Z (2.039 seconds).

## Outcome

The exact released entity-widget destructor failed the isolated compile; the sole attempt scored 0%.
