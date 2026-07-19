# _$_26slf_create_entity_widget_t

- Address: `0x003271C0`
- Size: `0x1C` (28 bytes)
- Object: `game/files_script`
- Debug source: `C:/KS/SRC/script_lib_entity_widget.cpp`
- Reference source: `KS/SRC/script_lib_entity_widget.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

A symbol-preserving wrapper reproduces the generated destructor's non-tail call to `script_library_class::function`.

`KELLY_DECOMP_COMPILER_BARRIER()` is a matching-only annotation that emits no target instruction. It prevents EE GCC from applying the sibling/tail-call or scheduling transformation described above.

## Outcome

`_$_26slf_create_entity_widget_t` matched exactly as a generated script_library_class::function destructor wrapper.
