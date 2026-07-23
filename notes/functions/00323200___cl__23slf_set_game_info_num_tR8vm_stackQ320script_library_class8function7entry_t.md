# __cl__23slf_set_game_info_num_tR8vm_stackQ320script_library_class8function7entry_t

- Address: `0x00323200`
- Size: `0x54` (84 bytes)
- Object: `game/files_script`
- Debug source: `C:/KS/SRC/script_lib.cpp`
- Reference source: `KS/SRC/script_lib.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 91.6667 | 71.4286 | `candidate.cpp` |
| 2 | different | 95.2381 | 90.4762 | `candidate.cpp` |
| 3 | different | 95.2381 | 90.4762 | `candidate.cpp` |
| 4 | different | 95.2381 | 90.4762 | `candidate.cpp` |
| 5 | different | 95.2381 | 90.4762 | `candidate.cpp` |

### Attempt 1 notes

Used the exact released set_game_info_num body with parameter layout, pstring construction, game/global layout, and set_num helper. The pstring was initially undersized, producing the wrong frame.

### Attempt 2 notes

Reconstructed the exact four-chunk pstring size and alignment. This reached 95.24%; only the equivalent ra/s0/local-address prologue schedule differed.

### Attempt 3 notes

Added the exact script-function inheritance. The prologue schedule remained unchanged.

### Attempt 4 notes

Marked pstring explicitly 16-byte aligned. Frame and code remained the same 95.24% form.

### Attempt 5 notes

Expanded the SLF parameter macro into equivalent register-qualified source. The compiler retained the same prologue ordering.

## Outcome

Released slf_set_game_info_num operator remained blocked by an equivalent three-instruction prologue schedule after five source-level attempts.
