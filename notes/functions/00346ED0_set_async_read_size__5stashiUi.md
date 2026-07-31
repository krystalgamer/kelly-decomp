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

The released indexed `substash` assignment is preserved. Binding the selected entry to the incoming `$4` stash-id register reproduces EE GCC's destructive index update and exact absolute-address schedule.

## Outcome

Matched stash asynchronous read-size setter.
