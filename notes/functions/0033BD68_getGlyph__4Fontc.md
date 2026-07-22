# getGlyph__4Fontc

- Address: `0x0033BD68`
- Size: `0x48` (72 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/text_font.cpp`
- Reference source: `KS/SRC/text_font.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 59.2105 | 52.6316 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Used the exact released body first with the shared original glyph layout. GCC emitted an extra join branch for the two explicit returns.

### Attempt 2 notes

Expressed the same released behavior through a null-initialized result local. This selects the target fallthrough control flow and matches exactly; no layout or behavior changed.

## Outcome

The font glyph lookup matches exactly with a shared Font declaration and equivalent result-local control flow.
