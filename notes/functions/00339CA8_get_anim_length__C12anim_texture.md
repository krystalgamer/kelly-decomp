# get_anim_length__C12anim_texture

- Address: `0x00339CA8`
- Size: `0x14` (20 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/material.cpp`
- Reference source: `KS/SRC/material.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 40.0 | 40.0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

The released accessor returns `frame_list.size()`: subtracting vector end/start pointers at `0xC`/`0x8` and dividing by four. Restoring pointer types matched on attempt two.

## Outcome

The released `anim_texture::get_anim_length` vector-size calculation matched on attempt two.
