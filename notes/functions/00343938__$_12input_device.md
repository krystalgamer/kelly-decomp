# _$_12input_device

- Address: `0x00343938`
- Size: `0x30` (48 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/inputmgr.cpp`
- Reference source: `KS/SRC/inputmgr.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 2 | different | 14.5833 | 8.3333 | `candidate.cpp` |
| 3 | different | 14.5833 | 8.3333 | `candidate.cpp` |

### Attempt 1 notes

Used the released empty virtual destructor directly. Defining the virtual key function caused EE GCC to emit `_vt$12input_device`, which conflicted with the absolute target-vtable alias; this candidate did not assemble.

### Attempt 2 notes

Modeled the vtable slot explicitly in a nonvirtual class destructor. The compiler emitted the correct conditional-delete semantics but tail-called `__builtin_delete`, omitted the target frame, and used `ori` for the literal vtable address.

### Attempt 3 notes

Ordinary native forms either re-emit the key-function vtable or collapse to a
sibling delete without the target frame.

## Outcome

The prior exact form manually restored the vtable and used a compiler barrier.
Those matching-only constructs were removed.
