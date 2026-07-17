# SetDisplay__9IGOWidgetb

- Address: `0x00164658`
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

The widget's display flag is the first word in the object. Assigning the
member bool matched the target store.

## Outcome

The IGOWidget display flag is the first word in the object. The first member-assignment candidate matched exactly and preserved the byte-identical integrated ROM.
