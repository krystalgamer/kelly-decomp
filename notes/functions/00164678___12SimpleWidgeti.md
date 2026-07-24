# __12SimpleWidgeti

- Address: `0x00164678`
- Size: `0x90` (144 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/igo_widget_simple.cpp`
- Reference source: `KS/SRC/ks/igo_widget_simple.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 97.9167 | 91.6667 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

The released simple-widget constructor matched after binding the derived vtable address to the target v1 register.

## Outcome

The released simple-widget constructor matched exactly on the second attempt.
