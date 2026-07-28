# find_instance__C19slc_script_object_tRC7stringx

- Address: `0x0034FED8`
- Size: `0x15C` (348 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/script_library_class.cpp`
- Reference source: `KS/SRC/script_library_class.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 73.2759 | 93.1034 | `candidate.cpp` |

### Attempt 1 notes

Tested the exact released `slc_script_object_t::find_instance` body from
`kelly-slaters-pro-surfer/KS/SRC/script_library_class.cpp:218-229`, using only
the required declarations and the released inline `stringx` concatenation
operators from `KS/SRC/stringx.h:486-520`.

The single non-placeholder candidate compiled to the target size (348 bytes)
and differed: 73.2759% byte score and 93.1034% instruction score. No variants
were attempted.

## Outcome

The exact released script-library-class instance finder differed from the target; the sole attempt scored 73.2759%.
