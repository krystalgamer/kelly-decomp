# nslGetSource__FPCcb

- Address: `0x0038C190`
- Size: `0x10C` (268 bytes)
- Object: `nsl/nsl_ps2_source`
- Debug source: `C:/NSL/PS2/nsl_ps2_source.cpp`
- Reference source: `NSL/PS2/nsl_ps2_source.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 14.1791 | 1.4925 | `candidate.cpp` |

### Attempt 1 notes

# Attempt 1

- Used the released `nslGetSource(const char *, bool)` body verbatim from `kelly-slaters-pro-surfer/NSL/PS2/nsl_ps2_source.cpp:216-239`.
- Added only the required source/system layout, NSL ID/constants, runtime string declarations, initialization/fatal declarations, and fixed symbol bindings needed for an isolated candidate.
- Result: **different** — byte score 14.1791%, instruction score 1.4925%. Exactly one candidate was tested; no variants or diff chase were performed.

## Outcome

The exact released NSL source lookup differed from the target; the sole attempt scored 14.1791%.
