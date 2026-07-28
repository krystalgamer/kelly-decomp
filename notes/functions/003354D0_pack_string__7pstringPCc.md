# pack_string__7pstringPCc

- Address: `0x003354D0`
- Size: `0x178` (376 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/pstring.cpp`
- Reference source: `KS/SRC/pstring.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

Result: compile_failed (score 0.0).

The candidate used the released `pack_string` body verbatim from pinned commit `7c3ade041cc03409a3114ce3ba4a70053c6e4e3b`, `KS/SRC/pstring.cpp:75-132`, with minimal declarations derived from `KS/SRC/pstring.h`. Compilation failed because the isolated compiler could not find `assert.h`, `ctype.h`, or `string.h`.

No retry was made; the one-candidate FIRST PASS budget was consumed.

## Outcome

Exact released-source first pass for packed string storage did not match.
