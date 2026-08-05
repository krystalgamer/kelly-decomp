# _destroy__13so_data_block

- Address: `0x00352F60`
- Size: `0x28` (40 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/so_data_block.cpp`
- Reference source: `KS/SRC/so_data_block.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `size40-so-data-block.cpp` |

### Attempt 1 notes

The shared block layout and an ordinary local delete-function pointer retain
the released conditional call frame.

## Outcome

The released destroy helper matches without a compiler barrier.
