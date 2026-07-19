# _$_9slc_mfg_t

- Address: `0x0031DAA0`
- Size: `0x1C` (28 bytes)
- Object: `game/files_script`
- Debug source: `C:/KS/SRC/script_lib_mfg.h`
- Reference source: `KS/SRC/script_lib_mfg.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

A symbol-preserving wrapper reproduces the generated destructor's non-tail call to `script_library_class`.

## Outcome

`_$_9slc_mfg_t` matched exactly as a generated script_library_class destructor wrapper.
