# nslPopBank__Fv

- Address: `0x0038FE60`
- Size: `0x184` (388 bytes)
- Object: `nsl/nsl_ps2`
- Debug source: `C:/NSL/PS2/nsl_ps2.cpp`
- Reference source: `NSL/PS2/nsl_ps2.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 25.2577 | 8.2474 | `candidate.cpp` |

### Attempt 1 notes

# Attempt 1 — exact released source

- Result: **different**
- Byte score: **25.2577%** (98/388)
- Instruction score: **8.2474%** (8/97)
- Candidate size: `384` bytes; target size: `388` bytes.
- Used the exact released `nslPopBank` body with only minimal faithful declarations and layouts required to compile it.
- No variants, diff chasing, later attempts, build, finalization, integration, or tracked-file edits were performed.

## Citations

- `kelly-slaters-pro-surfer/NSL/PS2/nsl_ps2.cpp:324-362`
- `kelly-slaters-pro-surfer/NSL/PS2/nsl_ps2.h:39-77,125-249`
- `kelly-slaters-pro-surfer/NSL/PS2/gas.h:159`
- `config/SLUS_203.34.symbol_addrs.txt`
- `tmp/functions/0038FE60_nslPopBank__Fv/attempt-1/result.json`

## Outcome

The exact released NSL bank pop differed at 25.2577% byte score; no source variant was attempted.
