# Show__11PhotoWidgetP10nglTexturePii

- Address: `0x0016AE98`
- Size: `0xB4` (180 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/igo_widget_photo.cpp`
- Reference source: `KS/SRC/ks/igo_widget_photo.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The exact released body matched on the first attempt after adding the faithful NGL quad prefix and PhotoWidget inheritance and members once in shared headers.

### Attempt 2 notes

The same released body matched without emitting a duplicate static constant by using the released `TIME_SHOWN` value directly; the original data definition remains in the linked target.

## Outcome

Matched photo-widget display setup using shared released IGOWidget, PhotoWidget, and NGL quad declarations.
