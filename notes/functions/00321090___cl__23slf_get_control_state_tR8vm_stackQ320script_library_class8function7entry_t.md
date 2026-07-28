# __cl__23slf_get_control_state_tR8vm_stackQ320script_library_class8function7entry_t

- Address: `0x00321090`
- Size: `0x16C` (364 bytes)
- Object: `game/files_script`
- Debug source: `C:/KS/SRC/script_lib.cpp`
- Reference source: `KS/SRC/script_lib.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 23.6702 | 2.1277 | `candidate.cpp` |

### Attempt 1 notes

# Attempt 1 — exact released source/minimal declarations

- FIRST PASS wave 53 lane B3 for `0x00321090 __cl__23slf_get_control_state_tR8vm_stackQ320script_library_class8function7entry_t`.
- Tested the exact released `slf_get_control_state_t::operator()` body once with minimal self-contained declarations preserving the VM stack layout and operations, parameter layout, joystick device value, singleton access, input call, return push, and overflow expression.
- Result: **different**, byte score **23.6702%** (89/376) and instruction score **2.1277%** (2/94); candidate size 376 bytes versus target size 364 bytes.
- Exactly one non-placeholder candidate was tested using `env/bin/python`.
- No variants, retries, diff chasing, build, finalization, integration, tracked-file/tool edits, subagents, lean work, commit, or push were performed.

## Citations

- `kelly-slaters-pro-surfer/KS/SRC/script_lib.cpp:1827-1847`
- `kelly-slaters-pro-surfer/KS/SRC/script_library_class.h:264-300`
- `kelly-slaters-pro-surfer/KS/SRC/vm_stack.h:21-93`
- `kelly-slaters-pro-surfer/KS/SRC/inputmgr.h:67-86,116,383-453`
- `tmp/functions/00321090___cl__23slf_get_control_state_tR8vm_stackQ320script_library_class8function7entry_t/attempt-1/result.json`

## Outcome

The exact released control-state script getter differed from the target; the sole attempt scored 23.6702%.
