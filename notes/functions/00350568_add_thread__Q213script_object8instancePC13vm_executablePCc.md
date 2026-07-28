# add_thread__Q213script_object8instancePC13vm_executablePCc

- Address: `0x00350568`
- Size: `0x15C` (348 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/script_object.cpp`
- Reference source: `KS/SRC/script_object.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

# Attempt 1 — exact released source/minimal declarations

- FIRST PASS wave 46 lane B4 for `0x00350568 add_thread__Q213script_object8instancePC13vm_executablePCc`.
- Submitted one non-placeholder candidate for the released two-argument `script_object::instance::add_thread` body with minimal declarations for `stringx`, `vm_executable`, `vm_thread`, `vm_stack`, and `script_object::instance`.
- Result: **compile_failed**, score **0.0%**. The candidate's minimal stand-in for the released `assert(nt != NULL)` used `__builtin_trap`, which this GCC 2.9 toolchain treated as an undeclared function.
- Per lane constraints, no retry, variants, diff chasing, build, finalization, integration, tracked-file/tool edits, subagents, lean work, commit, or push were performed.

## Citations

- `kelly-slaters-pro-surfer/KS/SRC/script_object.cpp:73-82`
- `kelly-slaters-pro-surfer/KS/SRC/script_object.h:27-61`
- `kelly-slaters-pro-surfer/KS/SRC/vm_thread.h:21-85,131-133`
- `kelly-slaters-pro-surfer/KS/SRC/vm_executable.h:15-53`
- `tmp/functions/00350568_add_thread__Q213script_object8instancePC13vm_executablePCc/attempt-1/compiler.stderr`
- `tmp/functions/00350568_add_thread__Q213script_object8instancePC13vm_executablePCc/attempt-1/result.json`

## Outcome

The exact released script-object thread adder failed the isolated compile; the sole attempt scored 0%.
