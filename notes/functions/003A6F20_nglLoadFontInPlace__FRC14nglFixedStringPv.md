# nglLoadFontInPlace__FRC14nglFixedStringPv

- Address: `0x003A6F20`
- Size: `0xE4` (228 bytes)
- Object: `ngl/ngl_ps2`
- Debug source: `C:/NGL/ps2/ngl_ps2.cpp`
- Reference source: `NGL/PS2/ngl_ps2.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 72.3684 | 63.1579 | `candidate.cpp` |
| 2 | different | 92.1053 | 91.2281 | `candidate.cpp` |
| 3 | different | 92.1053 | 91.2281 | `candidate.cpp` |
| 4 | different | 91.6667 | 89.4737 | `candidate.cpp` |
| 5 | different | 92.1053 | 91.2281 | `candidate.cpp` |

## Outcome

Deferred after five source-faithful attempts. The released in-place font loader reaches exact size and reproduces every branch, object offset, constant, call, global, and return; only five independent prologue and parse-argument scheduling choices differ.
