# _$_16slf_str_append_t

- Address: `0x003215C0`
- Size: `0x1C` (28 bytes)
- Object: `game/files_script`
- Debug source: `C:/KS/SRC/script_lib.cpp`
- Reference source: `KS/SRC/script_lib.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

A symbol-preserving wrapper reproduces the generated destructor's non-tail call to `script_library_class::function`.

## Outcome

`_$_16slf_str_append_t` matched exactly as a generated script_library_class::function destructor wrapper.
