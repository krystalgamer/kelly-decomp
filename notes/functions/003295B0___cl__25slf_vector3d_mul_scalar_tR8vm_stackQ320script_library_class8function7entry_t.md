# __cl__25slf_vector3d_mul_scalar_tR8vm_stackQ320script_library_class8function7entry_t

- Address: `0x003295B0`
- Size: `0x178` (376 bytes)
- Object: `game/files_script`
- Debug source: `C:/KS/SRC/script_lib_vector3d.cpp`
- Reference source: `KS/SRC/script_lib_vector3d.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 17.8191 | 3.1915 | `candidate.cpp` |

### Attempt 1 notes

First-pass released-source candidate compiled and differed: 17.8191% byte score (67/376), 3.1915% instruction score (3/94), candidate size 236 versus target size 376. The function body is from pinned commit `7c3ade041cc03409a3114ce3ba4a70053c6e4e3b`, `KS/SRC/script_lib_vector3d.cpp:101-123`; supporting layouts/macros are from `KS/SRC/vm_stack.h:12-65`, `KS/SRC/script_library_class.h:20-55,264-299`, and `KS/SRC/HWOSPS2/ps2_algebra.h:292-374`. No retry was attempted, per the one-candidate FIRST PASS constraint.

## Outcome

Exact released-source first pass for vector scalar script multiplication did not match.
