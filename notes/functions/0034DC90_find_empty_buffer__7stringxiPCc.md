# find_empty_buffer__7stringxiPCc

- Address: `0x0034DC90`
- Size: `0xF8` (248 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/stringx.cpp`
- Reference source: `KS/SRC/stringx.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 98.7903 | 95.1613 | `candidate.cpp` |

### Attempt 1 notes

Attempt 1 used the released `stringx::find_empty_buffer` body with its debug peak tracking, exact capacity constants, authentic `string_buf` layout/inlines, and address-bound helpers/globals. It compiled to the target size but differed: 98.7903% bytes (245/248) and 95.1613% instructions (59/62). No second candidate was attempted.

## Outcome

Exact released stringx empty-buffer source differed from the target; preserved attempt 1 for the later Sol pass.
