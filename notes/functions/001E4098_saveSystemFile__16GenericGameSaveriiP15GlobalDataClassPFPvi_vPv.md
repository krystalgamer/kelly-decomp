# saveSystemFile__16GenericGameSaveriiP15GlobalDataClassPFPvi_vPv

- Address: `0x001E4098`
- Size: `0xDC` (220 bytes)
- Object: `game/files_hwosps2`
- Debug source: `C:/KS/SRC/hwosps2/ps2_gamesaver.cpp`
- Reference source: `KS/SRC/HWOSPS2/ps2_gamesaver.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 12.0 | 1.3333 | `candidate-round1.cpp` |
| 2 | different | 11.4943 | 1.1494 | `candidate-round2.cpp` |
| 3 | different | 60.0 | 32.7273 | `candidate-round3b.cpp` |
| 4 | different | 20.614 | 0.0 | `candidate-round4.cpp` |
| 5 | different | 66.3636 | 56.3636 | `candidate-round5.cpp` |

### Attempt 1 notes

Used the exact released saveSystemFile body and saveInfo declaration. EE GCC copied the by-value saveInfo local into a second argument buffer, creating a 336-byte frame and 300-byte function.

### Attempt 2 notes

Changed the timestamp layout to a 32-bit field and named the data size. The by-value copy remained and the altered tail copy expanded the function to 348 bytes.

### Attempt 3 notes

Declared setFileInfo with the target symbol but reference calling convention so the local saveInfo could be passed directly. This recovered the 220-byte size and most call setup, with remaining layout, register, and literal-address differences.

### Attempt 4 notes

Restored the 64-bit timestamp, added frame padding, and pinned saved arguments to the target registers. The constraints overextended live ranges and produced a 228-byte function with a different prologue.

### Attempt 5 notes

Kept the restored timestamp and direct reference-style setFileInfo call without fixed-register constraints. The candidate matched the 220-byte size and 31 of 55 instructions, the best result, but literal loads and register scheduling still differed.

## Outcome

Deferred after five source-level attempts. A reference-style setFileInfo declaration recovered the target 220-byte size and save call shape, but the optimized saveInfo literal loads and exact saved-register schedule remained different.
