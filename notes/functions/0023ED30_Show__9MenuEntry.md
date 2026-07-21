# Show__9MenuEntry

- Address: `0x0023ED30`
- Size: `0x44` (68 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/menu.cpp`
- Reference source: `KS/SRC/ks/menu.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 1.4706 | 0.0 | `show_menuentry_candidate.cpp` |
| 2 | different | 40.2778 | 16.6667 | `show_menuentry_candidate.cpp` |
| 3 | different | 89.7059 | 82.3529 | `show_menuentry_candidate.cpp` |
| 4 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Tested an empty `MenuEntry::Show`. It emitted only the return sequence (8 bytes), confirming the released 68-byte function contains state mutation and a call.

### Attempt 2 notes

Modeled the flags word at offset 0 and a raw vtable pointer at offset 4. The virtual descriptor offsets were correct, but the hand-expanded condition and extra call argument emitted 72 bytes with different registers, branching, and scheduling.

### Attempt 3 notes

Used a source-faithful one-argument virtual-call wrapper and reached the exact 68-byte size. Fourteen of seventeen instructions matched; `if (!(state & 1))` normalized the boolean with `xori`/`andi` and produced the opposite branch form, preventing the released early return-load scheduling.

### Attempt 4 notes

Restored the released `MenuEntry` declaration order and inline helper chain: `IsVisible()` calls `GetFlag()`, whose explicit `!= 0` is negated by the source `if (!IsVisible())`. This emitted the direct `andi`/`bnez` condition and exact delay-slot scheduling. The declaration also reproduces the GCC ABI layout: `flags` at offset 0, vptr at offset 4, and the `OnShow` virtual descriptor at offsets `0x78`/`0x7c`. The candidate matched all 68 bytes and 17 instructions.

## Outcome

The released MenuEntry::Show body matched exactly on attempt 4. Preserving the original IsVisible/GetFlag boolean helper chain produced the direct visibility-bit branch and return-load scheduling, while the full MenuEntry virtual declaration order reproduced the flags/vptr layout and OnShow descriptor offsets. The isolated candidate matched all 68 bytes and the integrated build preserves the reference ROM checksum.
