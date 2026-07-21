# __cl__14slf_set_zoom_tR8vm_stackQ320script_library_class8function7entry_t

- Address: `0x0031DF58`
- Size: `0x3C` (60 bytes)
- Object: `game/files_script`
- Debug source: `C:/KS/SRC/script_lib.cpp`
- Reference source: `KS/SRC/script_lib.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 63.3333 | 46.6667 | `candidate.cpp` |
| 2 | different | 63.3333 | 46.6667 | `candidate.cpp` |
| 3 | different | 61.6667 | 40.0 | `candidate.cpp` |
| 4 | different | 63.3333 | 46.6667 | `candidate.cpp` |
| 5 | different | 55.0 | 46.6667 | `candidate.cpp` |

### Attempt 1 notes

The released SLF_PARMS/SLF_DONE body matched semantics but old GCC hoisted the geometry-manager singleton load before the stack pop.

### Attempt 2 notes

Using the authentic singleton inst() accessor retained the same 63.33% load/register schedule.

### Attempt 3 notes

A reviewed barrier after SLF_PARMS changed registers without recovering the target load placement.

### Attempt 4 notes

A named zoom value preserved the original candidate schedule.

### Attempt 5 notes

A post-assignment barrier moved stores away from the target jal delay slot and reduced agreement.

## Outcome

Five source-authentic SLF forms preserved the released behavior and macros, but isolated old GCC hoisted the singleton load unlike the target schedule.
