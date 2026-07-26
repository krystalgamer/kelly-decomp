# purge__9slc_str_t

- Address: `0x00350220`
- Size: `0xE0` (224 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/script_library_class.cpp`
- Reference source: `KS/SRC/script_library_class.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 18.3036 | 0.0 | `candidate.cpp` |
| 2 | different | 67.4107 | 39.2857 | `candidate.cpp` |
| 3 | different | 71.875 | 57.1429 | `candidate.cpp` |
| 4 | different | 35.0 | 18.3333 | `candidate.cpp` |
| 5 | different | 35.5932 | 20.339 | `candidate.cpp` |

## Outcome

Deferred after five source-faithful attempts. The released slc_str_t purge semantics, vector layout, managed-string deletion, and allocator paths are recovered, but temporary-vector lifetime and register scheduling remain different in the legacy compiler.
