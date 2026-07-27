# set_handed_axis_family__14link_interfacei

- Address: `0x00122788`
- Size: `0x104` (260 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/link_interface.cpp`
- Reference source: `KS/SRC/link_interface.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

# Attempt 1

Extracted the released definition verbatim from `kelly-slaters-pro-surfer/KS/SRC/link_interface.cpp:104-124` and copied isolated declarations from released headers. The single permitted test failed to compile because candidate line 60 contains a stray literal `\t` before `assert(my_bone);`. Per one-shot instructions, no correction or second candidate was attempted.

## Outcome

The sole extracted released handed-axis candidate failed compilation because it preserved a stray literal tab escape; no retry was made.
