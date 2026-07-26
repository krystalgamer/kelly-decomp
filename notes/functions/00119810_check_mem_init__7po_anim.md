# check_mem_init__7po_anim

- Address: `0x00119810`
- Size: `0xBC` (188 bytes)
- Object: `game/files_anim`
- Debug source: `C:/KS/SRC/po_anim.cpp`
- Reference source: `KS/SRC/po_anim.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

The exact released static-allocation expansion matches after completing the
shared 88-byte po_anim layout.

## Outcome

Released po animation static-memory initialization reproduces the target exactly.
