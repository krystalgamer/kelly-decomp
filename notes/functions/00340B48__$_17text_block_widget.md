# _$_17text_block_widget

- Address: `0x00340B48`
- Size: `0x84` (132 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/widget.cpp`
- Reference source: `KS/SRC/widget.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released text-block widget teardown matched with the exact vtable reset, font release, reverse string destruction, and widget base teardown.

## Outcome

The released text-block widget destructor matched exactly on the first attempt.
