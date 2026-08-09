# __14SplitterWidget

- Address: `0x00168C20`
- Size: `0x38` (56 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/igo_widget_splitter.cpp`
- Reference source: `KS/SRC/ks/igo_widget_splitter.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 98.2143 | 92.8571 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

The released constructor uses the shared `IGOWidget` and `SplitterWidget`
declarations. The isolated vtable symbol retains the established `+0x10000`
signed-LO16 alias so relocation carry reproduces the linked address.

## Outcome

The duplicate widget classes were removed; the constructor remains exact.
