# __cl__24slf_trigger_set_active_tR8vm_stackQ320script_library_class8function7entry_t

- Address: `0x00328A48`
- Size: `0x4C` (76 bytes)
- Object: `game/files_script`
- Debug source: `C:/KS/SRC/script_lib_trigger.cpp`
- Reference source: `KS/SRC/script_lib_trigger.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 96.0526 | 100.0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

## Attempt notes

Used immutable `script_lib_trigger.cpp:87-105` with the shared trigger and SLF
declarations. Attempt 1 emitted the correct instructions but left the external
method call unresolved in the isolated object. Attempt 2 supplied the known
retail address for the already matched `trigger::set_active`.

## Outcome

The released source matched byte-for-byte.
