# _$_t13instance_bank1Z12vr_billboard

- Address: `0x002FD6F0`
- Size: `0x1B4` (436 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/instance.h`
- Reference source: `KS/SRC/instance.h`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

# Attempt 1

- UTC: 2026-07-28T18:21:06Z–2026-07-28T18:24:28Z.
- Released body citation: `kelly-slaters-pro-surfer/KS/SRC/instance.h:99-110`; declarations/layout citation: `instance.h:14-64`; target metadata: `tmp/functions/002FD6F0__$_t13instance_bank1Z12vr_billboard/metadata.json`; target assembly: `target.s:1-113`.
- Exact released-template body was used once with self-contained faithful declarations.
- Result: `compile_failed`; byte score `0.0`; instruction score unavailable; target size `436` bytes; candidate emitted size unavailable.
- Candidate SHA-1: `5f0f01e78ed38ed814262dd1fa3e4214790ea31f`; result: `attempt-1/result.json`; compiler reported `<set>` unavailable.
- One-shot only: one harness invocation, no retry, no build/configure/ninja, no finalize/integrate, and no tracked-file edit.

## Outcome

The exact released billboard instance-bank destructor candidate failed to compile because the isolated harness lacks the released set header path; no alternate source was attempted.
