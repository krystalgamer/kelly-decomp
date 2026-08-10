# getAbbr__14SurferFrontEndi

- Address: `0x00187AA0`
- Size: `0x5C` (92 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/SurferFrontEnd.cpp`
- Reference source: `KS/SRC/ks/SurferFrontEnd.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Read the exact released static getAbbr body and declaration, SurferData stride/abbr offset, and stringx ABI helpers. Reusing the proven ABI reconstruction matched on attempt 1.

## Outcome

The fixed hidden-result register and manual string temporary were removed.
Native return-by-value code changes the shipped ABI schedule, so the wrapper
is deferred.
