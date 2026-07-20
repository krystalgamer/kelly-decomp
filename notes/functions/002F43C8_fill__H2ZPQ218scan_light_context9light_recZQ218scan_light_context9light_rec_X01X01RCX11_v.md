# fill__H2ZPQ218scan_light_context9light_recZQ218scan_light_context9light_rec_X01X01RCX11_v

- Address: `0x002F43C8`
- Size: `0x2C` (44 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_algobase.h`
- Reference source: ``
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 67.3077 | 81.8182 | `shape-1.cpp` |
| 2 | different | 67.3077 | 81.8182 | `shape-2.cpp` |
| 3 | different | 67.3077 | 81.8182 | `shape-3.cpp` |
| 4 | different | 67.3077 | 81.8182 | `shape-4.cpp` |
| 5 | different | 67.3077 | 81.8182 | `shape-5.cpp` |

### Attempt 1 notes

The canonical while loop reproduced nine of eleven target instructions, but
EE GCC emitted a 52-byte function with two isolated nops around the 8-byte
`ldl`/`ldr` and `sdl`/`sdr` copy. Best byte score: 67.3077%.

### Attempt 2 notes

The equivalent for loop emitted the same 52-byte candidate and retained both
extra scheduling nops.

### Attempt 3 notes

The guarded do/while spelling preserved the same copy and branch sequence but
did not remove either extra nop.

### Attempt 4 notes

The post-increment spelling emitted the identical 52-byte loop, including both
extra scheduling nops.

### Attempt 5 notes

The explicit goto loop with register-qualified iterators also emitted the same
52-byte candidate and could not reproduce the target nop-free schedule.

## Outcome

Five source loop spellings retained two isolated scheduling nops after the 8-byte copy; best byte score was 67.3077% and best instruction score was 81.8182%.
