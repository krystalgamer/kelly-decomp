# set_async_read_size__5stashiUi

- Address: `0x00346ED0`
- Size: `0x1C` (28 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/mustash.cpp`
- Reference source: `KS/SRC/mustash.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 89.2857 | 71.4286 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

The shared `mustash.h` layout gives `multistash` its released 0x318-byte size
and places `async_read_size` at offset 0x280, naturally reproducing the index.

## Outcome

The exact released assignment now matches without a local layout shell.
