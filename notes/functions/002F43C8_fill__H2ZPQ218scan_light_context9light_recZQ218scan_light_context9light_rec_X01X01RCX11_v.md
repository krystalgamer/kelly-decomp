# fill__H2ZPQ218scan_light_context9light_recZQ218scan_light_context9light_rec_X01X01RCX11_v

- Address: `0x002F43C8`
- Size: `0x2C` (44 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_algobase.h`
- Reference source: ``
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 67.3077 | 81.8182 | `candidate.cpp` |
| 2 | different | 67.3077 | 81.8182 | `candidate.cpp` |
| 3 | different | 67.3077 | 81.8182 | `candidate.cpp` |

### Attempt 1 notes

The canonical eight-byte assignment loop emits two extra post-copy nops.

### Attempt 2 notes

A pointer do-while form retains the same 52-byte schedule.

### Attempt 3 notes

An indexed loop retains the same two extra scheduler slots.

## Outcome

The prior match used hand-written assembly. It was removed and the generated
record fill was deferred.
