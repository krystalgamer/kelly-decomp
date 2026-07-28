# nvlStreamRewind__FP9nvlStream

- Address: `0x00386DF8`
- Size: `0x188` (392 bytes)
- Object: `nvl/nvlstream_ps2`
- Debug source: `C:/NVL/ps2/nvlstream_ps2.cpp`
- Reference source: `NVL/PS2/nvlstream_ps2.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 9.6939 | 1.0204 | `candidate.cpp` |

### Attempt 1 notes

# FIRST PASS wave 66 lane B1 — 0x00386DF8

- Status: **source_pending** (`different`)
- Attempts: **1**
- Byte score: **9.6939%** (38/392)
- Instruction score: **1.0204%** (1/98)
- Candidate size: **228 bytes**; target size: **392 bytes**
- Candidate: `tmp/functions/00386DF8_nvlStreamRewind__FP9nvlStream/attempt-1/candidate.cpp`
- SHA-1: `b36bd9c0742889363aec0f5a1e5ba808d97094ff`
- Started: `2026-07-28T11:45:05Z`; completed: `2026-07-28T11:45:08Z`; duration: **3s**

Tested the exact released `nvlStreamRewind` body once with minimal faithful declarations preserving the release stream layout, flags, mutex API, and stream-read API. The candidate differed. Per first-pass policy, no variants, retries, disassembly comparison, or diff chasing were performed. No finalization, build, tracked-file edit, commit, or git mutation was performed.

Citations: `kelly-slaters-pro-surfer/NVL/PS2/nvlstream_ps2.cpp:46-101,1177-1209`; `kelly-slaters-pro-surfer/NVL/PS2/nvlstream_ps2.h:4-20,43-93`; `tmp/functions/00386DF8_nvlStreamRewind__FP9nvlStream/attempt-1/result.json`.

## Outcome

The exact released NVL stream rewind differed at 9.6939% byte score; no source variant was attempted.
