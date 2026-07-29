# nglBakeTextureChunk__FRPUliiiiPUx

- Address: `0x0039DC40`
- Size: `0x264` (612 bytes)
- Object: `ngl/ngl_ps2`
- Debug source: `C:/NGL/ps2/ngl_ps2.cpp`
- Reference source: `NGL/PS2/ngl_ps2.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | symbol_missing | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

# FIRST PASS wave117 B4 0x0039DC40

Exact released `nglBakeTextureChunk` source was recovered from
`historicalsource/kelly-slaters-pro-surfer`
(`NGL/PS2/ngl_ps2.cpp`, commit
`7c3ade041cc03409a3114ce3ba4a70053c6e4e3b`). The single LF candidate
preserves the released function body and supplies only minimal self-contained
PS2 declarations and macros.

Result: symbol missing, score 0.0. The candidate emitted
`nglBakeTextureChunk__FRPUliiiiPUI80` rather than the target
`nglBakeTextureChunk__FRPUliiiiPUx`. No follow-up attempted.

## Outcome

The exact released texture-chunk baking candidate compiled without emitting the target symbol; no source variant was attempted.
