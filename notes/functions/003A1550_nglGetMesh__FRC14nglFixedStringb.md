# nglGetMesh__FRC14nglFixedStringb

- Address: `0x003A1550`
- Size: `0x64` (100 bytes)
- Object: `ngl/ngl_ps2`
- Debug source: `C:/NGL/ps2/ngl_ps2.cpp`
- Reference source: `NGL/PS2/ngl_ps2.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | symbol_missing | 0.0 | 0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

Read the exact mesh bank/search layout, warning flag/literal, instance value offset, and null return. It matched on attempt 2.

## Outcome

Matched mesh lookup
