# nslInit__Fv

- Address: `0x0038F8E8`
- Size: `0x180` (384 bytes)
- Object: `nsl/nsl_ps2`
- Debug source: `C:/NSL/PS2/nsl_ps2.cpp`
- Reference source: `NSL/PS2/nsl_ps2.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

# 0x0038F8E8 nslInit__Fv

Prepared exactly one source-faithful candidate from the released `NSL/PS2/nsl_ps2.cpp` body, adding only local declarations and fixed-address bindings. The sole test failed to compile because the legacy compiler could not find `stdio.h` or `string.h`; per lane rules, no further attempt was made. Score: 0.0%.

## Outcome

The exact released NSL initialization failed to compile in the isolated bench; no source variant was attempted.
