# __cl__23slf_get_game_info_str_tR8vm_stackQ320script_library_class8function7entry_t

- Address: `0x00323580`
- Size: `0x194` (404 bytes)
- Object: `game/files_script`
- Debug source: `C:/KS/SRC/script_lib.cpp`
- Reference source: `KS/SRC/script_lib.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 9.901 | 2.9703 | `candidate.cpp` |

### Attempt 1 notes

# Source-first attempt 1

- Function: `0x00323580 __cl__23slf_get_game_info_str_tR8vm_stackQ320script_library_class8function7entry_t`
- Exact released body: `kelly-slaters-pro-surfer/KS/SRC/script_lib.cpp:2809-2825`
- Supporting declarations: `kelly-slaters-pro-surfer/KS/SRC/script_lib.cpp:2796-2808`, `kelly-slaters-pro-surfer/KS/SRC/script_library_class.h`, `kelly-slaters-pro-surfer/KS/SRC/vm_stack.h`, `kelly-slaters-pro-surfer/KS/SRC/game.h`, `kelly-slaters-pro-surfer/KS/SRC/pstring.h`, `kelly-slaters-pro-surfer/KS/SRC/stringx.h`
- Candidate: `tmp/functions/00323580___cl__23slf_get_game_info_str_tR8vm_stackQ320script_library_class8function7entry_t/attempt-1/candidate.cpp`
- Result: `different`
- Byte score: `9.9010%` (40/404), candidate 144 bytes, target 404 bytes
- Instruction score: `2.9703%` (3/101)
- Candidate uses the exact released function body after direct expansion of `SLF_PARMS`, `SLF_RETURN`, and `SLF_DONE`, plus minimal declarations.
- No variants, additional attempts, diff chase, tracked edits, build, finalization, or commit were performed.

## Outcome

The exact released string game-info script function differed at 9.9010% byte score; no source variant was attempted.
