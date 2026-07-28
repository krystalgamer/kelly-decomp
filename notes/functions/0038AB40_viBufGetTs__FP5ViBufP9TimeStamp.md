# viBufGetTs__FP5ViBufP9TimeStamp

- Address: `0x0038AB40`
- Size: `0x1A4` (420 bytes)
- Object: `nvl/nvlMPEG_ps2`
- Debug source: `C:/NVL/ps2/nvlMPEG_ps2.cpp`
- Reference source: `NVL/PS2/nvlMPEG_ps2.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 64.7619 | 58.0952 | `candidate.cpp` |

### Attempt 1 notes

# FIRST PASS wave 74 lane B1 — 0x0038AB40

- Confirmed there were no prior attempts.
- Copied the exact released `viBufGetTs` body from `kelly-slaters-pro-surfer/NVL/PS2/nvlMPEG_ps2.cpp:1914-1944`.
- Added only minimal self-contained declarations for `TimeStamp`, `sceIpuDmaEnv`, `ViBuf`, SDK registers/semaphores, constants, macro, and inline helper.
- Ran `function_test` exactly once. Result: `different`, byte score 64.7619%, instruction score 58.0952%.
- No variants, retries, diff chasing, build, finalization, integration, commit, push, or tracked-file edits were performed.
- Because the attempt did not match, no source integration proposal is included.

## Outcome

The exact released MPEG timestamp retrieval differed at 64.7619% byte score; no source variant was attempted.
