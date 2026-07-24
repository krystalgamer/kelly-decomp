# __cl__28slf_localize_thread_region_tR8vm_stackQ320script_library_class8function7entry_t

- Address: `0x0031E158`
- Size: `0x78` (120 bytes)
- Object: `game/files_script`
- Debug source: `C:/KS/SRC/script_lib.cpp`
- Reference source: `KS/SRC/script_lib.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 45.8333 | 16.6667 | `candidate.cpp` |
| 2 | different | 39.1667 | 16.6667 | `candidate.cpp` |
| 3 | different | 50.7812 | 21.875 | `candidate.cpp` |
| 4 | different | 57.5 | 46.6667 | `candidate.cpp` |
| 5 | different | 72.5 | 53.3333 | `candidate.cpp` |

## Outcome

Deferred slf_localize_thread_region_t execution after five source-level attempts; the released stack pop, terrain lookup, region selection, thread localization, and return reproduced, but the target iterator temporary and register schedule did not.
