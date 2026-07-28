# link__6signalP6signal

- Address: `0x0034C0F8`
- Size: `0x180` (384 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/signal.cpp`
- Reference source: `KS/SRC/signal.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

One source-faithful candidate submitted. The released body is `signal.cpp:117-125`; minimal class/list declarations follow `signals.h:76-109,126-127`. The sole attempt failed because isolated compiler include paths do not provide `<algorithm>` or `<list>`; no further candidate was attempted per lane rules.

## Outcome

The exact released signal-link body failed to compile in the isolated bench; no variant was attempted.
