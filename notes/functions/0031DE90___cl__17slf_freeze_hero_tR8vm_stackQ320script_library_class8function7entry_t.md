# __cl__17slf_freeze_hero_tR8vm_stackQ320script_library_class8function7entry_t

- Address: `0x0031DE90`
- Size: `0x54` (84 bytes)
- Object: `game/files_script`
- Debug source: `C:/KS/SRC/script_lib.cpp`
- Reference source: `KS/SRC/script_lib.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 38.6364 | 27.2727 | `candidate.cpp` |
| 2 | different | 59.5238 | 47.619 | `candidate.cpp` |
| 3 | different | 51.1905 | 38.0952 | `candidate.cpp` |
| 4 | different | 51.1905 | 38.0952 | `candidate.cpp` |
| 5 | different | 38.6364 | 27.2727 | `candidate.cpp` |

### Attempt 1 notes

Used the exact released freeze_hero operator, SLF parameter pop, app singleton/game layout, bool conversion, and freeze_hero helper address. The compiler hoisted the singleton load and inserted an equivalent game-pointer move, growing to 88 bytes.

### Attempt 2 notes

Added a non-emitting boundary after parameter extraction to prevent singleton-load hoisting. Size matched, but float registers and argument scheduling differed.

### Attempt 3 notes

Made the app pointer volatile and the bool/game locals explicit. The target operations remained but were grouped in a different order.

### Attempt 4 notes

Constrained the bool to the target argument register through a non-emitting operand boundary. The compiler retained the alternate grouping.

### Attempt 5 notes

Restored the exact released body and exact script-function inheritance. Code generation returned to the original 88-byte singleton-load schedule.

## Outcome

Released slf_freeze_hero operator remained blocked by equivalent singleton/bool argument scheduling after five source-level attempts.
