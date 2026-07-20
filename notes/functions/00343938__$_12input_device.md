# _$_12input_device

- Address: `0x00343938`
- Size: `0x30` (48 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/inputmgr.cpp`
- Reference source: `KS/SRC/inputmgr.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 2 | different | 14.5833 | 8.3333 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Used the released empty virtual destructor directly. Defining the virtual key function caused EE GCC to emit `_vt$12input_device`, which conflicted with the absolute target-vtable alias; this candidate did not assemble.

### Attempt 2 notes

Modeled the vtable slot explicitly in a nonvirtual class destructor. The compiler emitted the correct conditional-delete semantics but tail-called `__builtin_delete`, omitted the target frame, and used `ori` for the literal vtable address.

### Attempt 3 notes

The released generated destructor restores the input-device vtable at offset 0x4 and conditionally invokes `__builtin_delete`. The ABI-shaped wrapper avoids re-emitting the vtable, and the trailing empty barrier preserves the target call frame instead of allowing a sibling tail call.

`KELLY_DECOMP_COMPILER_BARRIER()` is a matching-only annotation that emits no target instruction. It prevents EE GCC from applying the sibling/tail-call or scheduling transformation described above.

## Outcome

The released empty input-device virtual destructor matched exactly through its generated vtable restore and conditional delete.
