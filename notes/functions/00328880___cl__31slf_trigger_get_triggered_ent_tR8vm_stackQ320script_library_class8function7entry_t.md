# __cl__31slf_trigger_get_triggered_ent_tR8vm_stackQ320script_library_class8function7entry_t

- Address: `0x00328880`
- Size: `0x158` (344 bytes)
- Object: `game/files_script`
- Debug source: `C:/KS/SRC/script_lib_trigger.cpp`
- Reference source: `KS/SRC/script_lib_trigger.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 26.1236 | 4.4944 | `candidate.cpp` |

### Attempt 1 notes

# First-pass notes

Tested the exact released operator body with minimal declarations reconstructed from the released headers. The candidate compiled and emitted the requested symbol, but did not match.

- Result: different
- Score: 26.1236% bytes; 4/89 instructions (4.4944%)
- Target/candidate size: 344/356 bytes
- Candidate SHA-1: aef70e99d91ee03412cbbe5b493a2f2052c3877e
- Primary delta: candidate uses a 160-byte frame and saves s4; target uses a 144-byte frame and saves through s3. The exact body and initial trigger/result load align structurally, while minimal string/thread declarations alter inlined overflow-expression layout and register allocation.
- No variants were attempted.

## Outcome

The exact released trigger entity getter differed from the target; the sole attempt scored 26.1236%.
