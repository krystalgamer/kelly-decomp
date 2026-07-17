# GetDisplay__C9IGOWidget

- Address: `0x00164670`
- Size: `0x8` (8 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/igo_widget.cpp`
- Reference source: `KS/SRC/ks/igo_widget.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The display flag is the first word in `IGOWidget`. Returning the member
matched the target load.

## Outcome

The IGOWidget display flag is the first word in the object. The first accessor candidate matched exactly and preserved the byte-identical integrated ROM.
