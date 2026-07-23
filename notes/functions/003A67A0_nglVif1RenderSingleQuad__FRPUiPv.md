# nglVif1RenderSingleQuad__FRPUiPv

- Address: `0x003A67A0`
- Size: `0x50` (80 bytes)
- Object: `ngl/ngl_ps2`
- Debug source: `C:/NGL/ps2/ngl_ps2.cpp`
- Reference source: `NGL/PS2/ngl_ps2.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 58.75 | 55.0 | `candidate.cpp` |
| 2 | different | 90.0 | 90.0 | `candidate.cpp` |
| 3 | different | 23.8095 | 9.5238 | `candidate.cpp` |
| 4 | different | 90.0 | 90.0 | `candidate.cpp` |
| 5 | different | 90.0 | 90.0 | `candidate.cpp` |

### Attempt 1 notes

Used the exact released four-call renderer body and helper declarations. Without a matching barrier, the compiler tail-called nglVif1FlushSPAD and produced 76 bytes.

### Attempt 2 notes

Added the matching-only compiler barrier after the released flush call. This restored the full 80-byte body and reached 90%; only the independent s1 save and packet-register setup were scheduled in the opposite order.

### Attempt 3 notes

Added a matching barrier before the first helper call as well. It over-constrained the prologue and expanded the body to 84 bytes.

### Attempt 4 notes

Removed the explicit quad local and cast Param at its single use while retaining the exit barrier. The same two-instruction prologue schedule remained at 90%.

### Attempt 5 notes

Preserved Param in a const source local before the released calls. The compiler again emitted the same 90% prologue scheduling mismatch.

## Outcome

Released nglVif1RenderSingleQuad remained blocked by a two-instruction prologue scheduling mismatch after five source-level attempts.
