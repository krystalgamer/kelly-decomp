# nvlStreamSystemShutdown__Fi

- Address: `0x00386520`
- Size: `0x180` (384 bytes)
- Object: `nvl/nvlstream_ps2`
- Debug source: `C:/NVL/ps2/nvlstream_ps2.cpp`
- Reference source: `NVL/PS2/nvlstream_ps2.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 19.5312 | 3.125 | `candidate.cpp` |

### Attempt 1 notes

# 0x00386520 nvlStreamSystemShutdown

Tested the exact released body once with minimal source-faithful declarations. The initial harness invocation supplied the candidate from inside the destination attempt directory, an infrastructure error that removed it before compilation. Re-running the identical SHA-1 candidate from safe scratch produced the canonical sole attempt: `different`, 19.5312% byte score and 3.1250% instruction score. No source variant was attempted.

Citations: `kelly-slaters-pro-surfer/NVL/PS2/nvlstream_ps2.cpp:850-899`; `tmp/functions/00386520_nvlStreamSystemShutdown__Fi/attempt-1/result.json`.

## Outcome

The exact released NVL stream-system shutdown differed at 19.5312% byte score; no source variant was attempted.
