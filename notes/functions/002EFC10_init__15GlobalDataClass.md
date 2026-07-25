# init__15GlobalDataClass

- Address: `0x002EFC10`
- Size: `0xB8` (184 bytes)
- Object: `game/files_misc2`
- Debug source: `ks/GlobalData.cpp`
- Reference source: `KS/SRC/ks/GlobalData.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 96.1957 | 93.4783 | `candidate.cpp` |
| 2 | different | 96.7391 | 95.6522 | `candidate.cpp` |
| 3 | different | 96.7391 | 95.6522 | `candidate.cpp` |
| 4 | different | 92.9348 | 91.3043 | `candidate.cpp` |
| 5 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 5 notes

The released availability loop matched using the shared GlobalData declaration and one reusable built CareerData layout; the released tree's CareerData definition differs from the shipped 220-byte/offset-0xAC record, so only the target-used fields are named and the remainder stays opaque. A precise EE normalization restores the shipped delay-slot move; the full 3,862-function ROM rebuild passed.

## Outcome

Matched global career-data initialization with shared built-record declarations and precise loop scheduling.
