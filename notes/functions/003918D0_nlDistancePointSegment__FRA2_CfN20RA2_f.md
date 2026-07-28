# nlDistancePointSegment__FRA2_CfN20RA2_f

- Address: `0x003918D0`
- Size: `0x194` (404 bytes)
- Object: `nsl/nl_ps2`
- Debug source: `C:/NSL/PS2/nl_ps2.cpp`
- Reference source: `NSL/PS2/nl_ps2.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | symbol_missing | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

Exact released `nlDistancePointSegment` body from `historicalsource/kelly-slaters-pro-surfer/NSL/PS2/nl_ps2.cpp` was tested once with minimal declarations.

Result: symbol missing because the compiler emitted the released signature as `nlDistancePointSegment__FRA2_CfT0T0RA2_f`, not the queued target spelling `nlDistancePointSegment__FRA2_CfN20RA2_f`. Per lane rules, no variant or diff chase was attempted.

## Outcome

The exact released point-to-segment distance function emitted no target symbol; no source variant was attempted.
