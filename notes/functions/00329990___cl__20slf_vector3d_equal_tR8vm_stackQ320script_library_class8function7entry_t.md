# __cl__20slf_vector3d_equal_tR8vm_stackQ320script_library_class8function7entry_t

- Address: `0x00329990`
- Size: `0x1C8` (456 bytes)
- Object: `game/files_script`
- Debug source: `C:/KS/SRC/script_lib_vector3d.cpp`
- Reference source: `KS/SRC/script_lib_vector3d.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 14.2544 | 3.5088 | `candidate.cpp` |

### Attempt 1 notes

# Attempt 1 — released-source first pass wave 83 lane A3

- Target: `0x00329990` `__cl__20slf_vector3d_equal_tR8vm_stackQ320script_library_class8function7entry_t`; object `game/files_script`; size 456 (`0x1C8`) bytes.
- Exact released operator body: `kelly-slaters-pro-surfer/KS/SRC/script_lib_vector3d.cpp:163-169`, preserved unchanged.
- Minimal faithful declarations derive from `script_lib_vector3d.cpp:150-169`, `script_library_class.h:24-65,270-300`, `vm_stack.h:21-87`, and `HWOSPS2/ps2_algebra.h:292-307,390-391`.
- Self-contained LF translation unit with no project or unavailable includes.
- Before testing, preparation and status confirmed `attempts_used: 0`.
- Exactly one harness invocation is authorized; no alternate, asm, annotations, variants, retry, attempts 2-5, or post-test chase.

## Result

- Sole invocation: `env/bin/python tools/function_test.py test 0x00329990 --candidate tmp/source-first-wave83/A3-00329990/candidate.cpp`.
- Result: **different**; 65/456 matching bytes (14.2544%), 4/114 matching instructions (3.5088%); candidate size 280 bytes.
- Candidate SHA-1: `f2b581744077f5ed3609a03d44176bf1144ac4a8`; SHA-256: `43cb6d00fa6ec9d5473638aab98a7b9b68fe6ba8d3051f6d9f4a78e86ab814e8`.
- UTC timing: `2026-07-28T21:39:56Z` to `2026-07-28T21:40:00Z`.
- One honest attempt only. No alternate/asm/annotations/variants/retry/attempts 2-5/post-test chase, tracked/reference edit, finalize, integrate, build, or git mutation.

## Outcome

The exact released vector-equality script body differed at 14.2544% byte score; no source variant was attempted.
