# OnRight__15CreditsFrontEndi

- Address: `0x001DDEB0`
- Size: `0x8` (8 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/ExtrasFrontEnd.h`
- Reference source: `KS/SRC/ks/ExtrasFrontEnd.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The target and released configuration reduce this front-end hook to an empty method. The guarded candidate matched on the first attempt.

## Outcome

The target and released configuration reduce CreditsFrontEnd::OnRight(int) to an empty hook. The first candidate matched exactly and preserved the byte-identical integrated ROM.
