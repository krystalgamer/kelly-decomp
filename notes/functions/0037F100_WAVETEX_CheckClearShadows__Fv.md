# WAVETEX_CheckClearShadows__Fv

- Address: `0x0037F100`
- Size: `0x28` (40 bytes)
- Object: `game/files_wave`
- Debug source: `C:/KS/SRC/ks/wavetex.cpp`
- Reference source: `KS/SRC/ks/wavetex.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 17.5 | 10.0 | `size40-wave-final.cpp` |
| 2 | matched | 100.0 | 100.0 | `size40-wavetex-clear-2.cpp` |

### Attempt 1 notes

The exact released conditional call collapses to a 32-byte sibling call.

### Attempt 2 notes

An ordinary local clear-function pointer retains the target call frame and
delay-slot flag store.

## Outcome

The released shadow-clear check matches without a compiler barrier.
