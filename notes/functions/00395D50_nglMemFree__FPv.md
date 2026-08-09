# nglMemFree__FPv

- Address: `0x00395D50`
- Size: `0x38` (56 bytes)
- Object: `ngl/ngl_ps2`
- Debug source: `C:/NGL/ps2/ngl_ps2.cpp`
- Reference source: `NGL/PS2/ngl_ps2.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 41.0714 | 28.5714 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released allocator wrapper dispatches to the configured NGL free callback or libc free. The recovered callback-table offset and original branch structure match exactly.

### Attempt 2 notes

The shared NGL callback table and branch-local function pointers preserve the
callback-first branch and both ordinary call paths.

## Outcome

The local callback layout and compiler barriers were removed.
