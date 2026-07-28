# __9vm_threadPQ213script_object8instancePC13vm_executableiP15script_callback

- Address: `0x00354400`
- Size: `0x1A8` (424 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/vm_thread.cpp`
- Reference source: `KS/SRC/vm_thread.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 12.2642 | 2.8302 | `candidate.cpp` |

### Attempt 1 notes

# FIRST PASS wave 75 lane B2 — 0x00354400

- Status: **different**
- Attempts: **1**
- Byte score: **12.2642%** (52/424)
- Instruction score: **2.8302%** (3/106)
- Candidate/target size: **172/424 bytes**
- Candidate SHA-1: `58e84f1646de1367880bd60863dcb887e593db09`

Tested the exact released four-argument `vm_thread` constructor body once
with minimal declarations for its member layout, stack, vector, executable,
callback, and script-library entry type. No variants, retries, diff chasing,
finalization, build, integration, tracked-file edits, commit, or push were
performed.

## Citations

- `kelly-slaters-pro-surfer/KS/SRC/vm_thread.cpp:76-98`
- `kelly-slaters-pro-surfer/KS/SRC/vm_thread.h:20-78,101-105`
- `kelly-slaters-pro-surfer/KS/SRC/vm_stack.h:21-57`
- `kelly-slaters-pro-surfer/KS/SRC/vm_executable.h:17-53`
- `kelly-slaters-pro-surfer/KS/SRC/signals.h:11-47`
- `tmp/functions/00354400___9vm_threadPQ213script_object8instancePC13vm_executableiP15script_callback/attempt-1/result.json`

## Outcome

The exact released callback VM-thread constructor differed at 12.2642% byte score; no source variant was attempted.
