# nglDumpTextures__Fv

- Address: `0x003AAB00`
- Size: `0x1BC` (444 bytes)
- Object: `ngl/ngl_ps2`
- Debug source: `C:/NGL/ps2/ngl_ps2.cpp`
- Reference source: `NGL/PS2/ngl_ps2.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 32.6577 | 15.3153 | `candidate.cpp` |

### Attempt 1 notes

Exact released body from `kelly-slaters-pro-surfer/NGL/PS2/ngl_ps2.cpp:10019-10065`, with only isolated, layout-faithful declarations. Target assembly (`tmp/functions/003AAB00_nglDumpTextures__Fv/target.s`) and reference were inspected before this sole test. Result: `different`, byte score 32.6577%, instruction score 15.3153%. Per lane instructions, no retry, alternate body, variants, or post-test diff chasing.

## Outcome

The exact released NGL texture-dump body differed at 32.6577% byte score; no source variant was attempted.
