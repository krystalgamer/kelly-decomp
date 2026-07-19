# _$_19slc_script_object_t

- Address: `0x0035F790`
- Size: `0x1C` (28 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/script_library_class.h`
- Reference source: `KS/SRC/script_library_class.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

A symbol-preserving wrapper reproduces the generated non-tail base destructor call.

`KELLY_DECOMP_COMPILER_BARRIER()` is a matching-only annotation that emits no target instruction. It prevents EE GCC from applying the sibling/tail-call or scheduling transformation described above.

## Outcome

`slc_script_object_t` matched exactly as a generated script-library-class destructor wrapper.
