# MemoryScreen__FP9MenuEntryi

- Address: `0x00236948`
- Size: `0x34` (52 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/ksdbmenu.cpp`
- Reference source: `KS/SRC/ks/ksdbmenu.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 32.6923 | 23.0769 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Modeled the debug word with unsigned bitfields. EE GCC tested bit 8 directly with `andi 0x100`, while the target's bool-bitfield access shifts right eight and masks with one, producing 48 bytes.

### Attempt 2 notes

The released CROSS-button toggle matched exactly after preserving the original bool-bitfield representation of `g_debug.mem_free_screen` at bit 8.

## Outcome

The released memory-screen toggle handler matched exactly.
