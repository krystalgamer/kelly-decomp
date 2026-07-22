# __cl__21slf_widget_fade_to2_tR8vm_stackQ320script_library_class8function7entry_t

- Address: `0x0032BF28`
- Size: `0x48` (72 bytes)
- Object: `game/files_script`
- Debug source: `C:/KS/SRC/script_lib_widget.cpp`
- Reference source: `KS/SRC/script_lib_widget.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 87.5 | 77.7778 | `candidate.cpp` |
| 2 | different | 91.6667 | 88.8889 | `candidate.cpp` |
| 3 | different | 91.6667 | 88.8889 | `candidate.cpp` |
| 4 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 5 | different | 65.2778 | 50.0 | `candidate.cpp` |

### Attempt 1 notes

Used the exact released SLF body and parameter types first. The minimal class declaration could not reproduce the released widget vptr and virtual slot layout.

### Attempt 2 notes

Reused the shared original-style widget declaration with its vptr at +0x140 and the released fade overload at virtual entry +0xD0. Register allocation and all offsets matched, but GCC scheduled the duration load after the virtual function load instead of before it.

### Attempt 3 notes

Named the three released float arguments as locals. GCC emitted the same nonmatching load schedule as attempt two.

### Attempt 4 notes

Tested a normalized matching barrier around the duration load, but the isolated candidate lacked the project barrier definition and did not compile.

### Attempt 5 notes

Retested the normalized empty barrier with its test-only definition. It overconstrained scheduling and scored worse, so the function is deferred rather than forcing the target schedule.

## Outcome

The released widget fade body reaches the correct layout and register allocation, but available GCC reverses one float-load and virtual-function-load pair.
