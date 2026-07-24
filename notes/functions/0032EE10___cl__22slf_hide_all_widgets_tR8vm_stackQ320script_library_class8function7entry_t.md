# __cl__22slf_hide_all_widgets_tR8vm_stackQ320script_library_class8function7entry_t

- Address: `0x0032EE10`
- Size: `0x70` (112 bytes)
- Object: `game/files_script`
- Debug source: `C:/KS/SRC/script_lib_widget.cpp`
- Reference source: `KS/SRC/script_lib_widget.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 27.6786 | 10.7143 | `candidate.cpp` |
| 2 | different | 35.4839 | 9.6774 | `candidate.cpp` |
| 3 | different | 46.4286 | 17.8571 | `candidate.cpp` |
| 4 | different | 37.5 | 16.6667 | `candidate.cpp` |
| 5 | different | 13.1356 | 1.6949 | `candidate.cpp` |

## Outcome

Deferred hide-all-widgets script function after five source-level attempts; the released child-list traversal and virtual hide calls reproduced, but the target STL iterator stack layout did not.
