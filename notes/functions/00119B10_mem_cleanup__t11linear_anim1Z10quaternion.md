# mem_cleanup__t11linear_anim1Z10quaternion

- Address: `0x00119B10`
- Size: `0x5C` (92 bytes)
- Object: `game/files_anim`
- Debug source: `C:/KS/SRC/po_anim.cpp`
- Reference source: `KS/SRC/po_anim.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Read the exact static-allocation cleanup pattern and quaternion linear_anim allocation/data/callback globals plus specialization mangling. It matched byte-exactly.

## Outcome

Matched quaternion linear animation cleanup
