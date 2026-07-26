# nglListAddNode__FUiPFRPUiPv_vPvP11nglSortInfoPPUc

- Address: `0x00397CD0`
- Size: `0xD4` (212 bytes)
- Object: `ngl/ngl_ps2`
- Debug source: `C:/NGL/ps2/ngl_ps2.cpp`
- Reference source: `NGL/PS2/ngl_ps2.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 96.6981 | 96.2264 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The exact released render-list insertion matched all but the allocator symbol relocation and its two argument setup instructions.

### Attempt 2 notes

Bound the exact allocator symbol and pinned only the alignment argument so size remains in the call delay slot. The released body matched byte-exactly.

## Outcome

Matched the exact released render-list node allocation, initialization, sort-info copy, and opaque/translucent insertion paths with the allocator alignment held in its shipped argument register.
