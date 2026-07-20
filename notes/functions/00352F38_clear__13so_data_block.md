# clear__13so_data_block

- Address: `0x00352F38`
- Size: `0x28` (40 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/so_data_block.cpp`
- Reference source: `KS/SRC/so_data_block.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released clear path destroys the buffer and then resets the block size.

## Outcome

The released `so_data_block::clear` implementation matched exactly.
