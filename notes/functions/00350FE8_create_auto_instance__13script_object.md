# create_auto_instance__13script_object

- Address: `0x00350FE8`
- Size: `0x1D0` (464 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/script_object.cpp`
- Reference source: `KS/SRC/script_object.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 24.7845 | 3.4483 | `candidate.cpp` |

### Attempt 1 notes

# FIRST PASS wave85 A5

- Target: `0x00350FE8 create_auto_instance__13script_object`
- Size/object: `464 / 0x1D0`, `game/files_vsim`
- Reference: `kelly-slaters-pro-surfer/KS/SRC/script_object.cpp`
- Confirmed zero prior attempts before preparation.
- Used the exact released function body with minimal faithful declarations and only resolved local shared headers.
- Sole test: `env/bin/python tools/function_test.py test 0x00350FE8 --candidate tmp/source-first-wave85/A5-00350FE8/candidate.cpp`
- Result: `different`; 115/464 matching bytes (24.7845%), 4/116 matching instructions (3.4483%); candidate size 452 bytes.
- Exactly one attempt; no retry, variant, alternate logic, asm/annotations, post-test chase, tracked/reference edit, finalize, integrate, build, or git operation.

## Outcome

The exact released automatic script-instance creation body differed at 24.7845% byte score; no source variant was attempted.
