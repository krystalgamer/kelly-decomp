# _$_34slf_localize_thread_to_character_t

- Address: `0x0031E060`
- Size: `0x1C` (28 bytes)
- Object: `game/files_script`
- Debug source: `C:/KS/SRC/script_lib.cpp`
- Reference source: `KS/SRC/script_lib.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 7.1429 | 0.0 | `size28-destructor-probe-1.cpp` |
| 2 | different | 7.1429 | 0.0 | `size28-destructor-probe-2.cpp` |
| 3 | different | 7.1429 | 0.0 | `size28-destructor-probe-3.cpp` |

## Outcome

All three ordinary compiler-generated destructor bodies emit a 20-byte
vptr-setting tail call to the `script_library_class::function` destructor. The target is a 28-byte
direct base-destructor call, so the manual symbol wrapper was removed and
this function was deferred.
