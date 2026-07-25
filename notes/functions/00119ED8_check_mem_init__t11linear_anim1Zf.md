# check_mem_init__t11linear_anim1Zf

- Address: `0x00119ED8`
- Size: `0xB4` (180 bytes)
- Object: `game/files_anim`
- Debug source: `C:/KS/SRC/po_anim.cpp`
- Reference source: `KS/SRC/po_anim.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The exact released static-allocation expansion matched on the first attempt by reusing the shared linear_anim and static-memory declarations across the scalar specialization.

## Outcome

Matched scalar linear-animation static-memory initialization using shared released template declarations.
