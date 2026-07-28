# create_event_callback__9vm_threadRCQ29vm_thread10argument_tb

- Address: `0x00355FD0`
- Size: `0x1A8` (424 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/vm_thread.cpp`
- Reference source: `KS/SRC/vm_thread.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

Exact released `vm_thread::create_event_callback` from `kelly-slaters-pro-surfer/KS/SRC/vm_thread.cpp:1107-1122` was tested once with the shared VM declarations.

Result: compile failed because the shared declarations omit required members and types; per lane rules this is the sole attempt (`attempt-1/compiler.stderr`, `attempt-1/result.json`).

## Outcome

The exact released event-callback creation failed to compile in the isolated bench; no source variant was attempted.
