# nvlStreamSystemCallback__Fi

- Address: `0x003863E8`
- Size: `0xE0` (224 bytes)
- Object: `nvl/nvlstream_ps2`
- Debug source: `C:/NVL/ps2/nvlstream_ps2.cpp`
- Reference source: `NVL/PS2/nvlstream_ps2.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 98.2143 | 98.2143 | `candidate.cpp` |
| 2 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 3 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 4 | matched | 100.0 | 100.0 | `candidate.cpp` |
| 5 | matched | 100.0 | 100.0 | `matched-discardable-labels.cpp` |

### Attempt 1 notes

Used the exact released switch and callback body with faithful system declarations. Function text differed only in the unresolved local jump-table address and signed-high global encoding.

### Attempt 2 notes

Tried a source-level external jump-table dispatch, but the first computed-goto form crossed initialized locals and did not compile.

### Attempt 3 notes

Reordered the label-retention context, but the computed-goto labels still crossed initialized local declarations and did not compile.

### Attempt 4 notes

Used a valid computed goto through the shipped jump table, retained the local labels, and applied compensated absolute bindings. Function text matched all 224 bytes and 56 instructions.

### Attempt 5 notes

Moved the label-retention table into a dedicated non-ROM section while preserving the exact matched function text. The generated linker discards this metadata section, preventing an extra rodata copy in the image.

## Outcome

Matched the NVL CD/DVD system callback using the released dispatch behavior, the shipped jump table, compensated globals, target local-label aliases, and a discard-only label-retention section that adds no ROM data.
