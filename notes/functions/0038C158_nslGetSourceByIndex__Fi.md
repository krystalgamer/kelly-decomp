# nslGetSourceByIndex__Fi

- Address: `0x0038C158`
- Size: `0x38` (56 bytes)
- Object: `nsl/nsl_ps2_source`
- Debug source: `C:/NSL/PS2/nsl_ps2_source.cpp`
- Reference source: `NSL/PS2/nsl_ps2_source.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released lookup bounds the index, checks the source slot used flag, and returns its ID or NSL_INVALID_ID. The recovered NSL header, 96-byte slot stride, and member offsets match exactly.

## Outcome

The original bounded NSL source-slot lookup matches exactly with the recovered system and source layouts.
