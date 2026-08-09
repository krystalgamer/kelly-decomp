# get_height__C11text_widget

- Address: `0x00340540`
- Size: `0x30` (48 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/widget.cpp`
- Reference source: `KS/SRC/widget.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 66.6667 | 58.3333 | `candidate.cpp` |
| 2 | different | 66.6667 | 58.3333 | `candidate.cpp` |
| 3 | different | 66.6667 | 58.3333 | `candidate.cpp` |

### Attempt 1 notes

Three native forms emit a 44-byte conversion sequence without the target's FPU
hazard `nop`.

## Outcome

The prior exact form used non-released inline assembly to force the missing
`nop`. That assembly was removed and the accessor was deferred.
