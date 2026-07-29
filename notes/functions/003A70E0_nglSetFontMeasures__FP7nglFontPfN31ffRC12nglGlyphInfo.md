# nglSetFontMeasures__FP7nglFontPfN31ffRC12nglGlyphInfo

- Address: `0x003A70E0`
- Size: `0x1D8` (472 bytes)
- Object: `ngl/ngl_ps2`
- Debug source: `C:/NGL/ps2/ngl_ps2.cpp`
- Reference source: `NGL/PS2/ngl_ps2.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | symbol_missing | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

FIRST PASS wave88 A4
Target: 0x003A70E0 nglSetFontMeasures__FP7nglFontPfN31ffRC12nglGlyphInfo (472/0x1D8), ngl/ngl_ps2
Reference: kelly-slaters-pro-surfer/NGL/PS2/ngl_ps2.cpp
Attempts before: 0
Attempt 1: exact released body with minimal faithful self-contained declarations, LF line endings, and no headers
Result: symbol_missing; score 0.0. Candidate emitted nglSetFontMeasures__FP7nglFontPfT1T1T1ffRC12nglGlyphInfo rather than the target symbol.
Exactly one candidate was tested. No alternatives, assembly, annotations, variants, retries, attempts 2-5, post-test chasing, build, finalization, integration, queue edits, tracked edits, commit, or push were performed.

## Outcome

The exact released font-measure setup candidate compiled without emitting the target symbol; no source variant was attempted.
