# __cl__20slf_beam_set_color_tR8vm_stackQ320script_library_class8function7entry_t

- Address: `0x00325C28`
- Size: `0x80` (128 bytes)
- Object: `game/files_script`
- Debug source: `C:/KS/SRC/script_lib_beam.cpp`
- Reference source: `KS/SRC/script_lib_beam.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 21.9512 | 0.0 | `candidate.cpp` |
| 2 | different | 29.6875 | 9.375 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 3 notes

The released beam color script function matched after reconstructing the inline color32 constructor, preserving the target conversion and byte-store order.

## Outcome

The released beam color script function matched exactly on the third attempt.
