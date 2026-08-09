# OnNewWave__22kellyslater_controller

- Address: `0x0026F750`
- Size: `0x30` (48 bytes)
- Object: `game/files_kellyslater`
- Debug source: `ks/kellyslater_controller.h`
- Reference source: `KS/SRC/ks/kellyslater_controller.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `size48-menu-destructor-core.cpp` |

### Attempt 1 notes

The released inline handler calls the embedded board controller at offset 0x37c, then `Reset`. The trailing empty barrier preserves the target second call and return frame.

### Attempt 2 notes

The shared controller and board declarations plus a local reset pointer
preserve both normal calls without a compiler barrier.

## Outcome

The local controller layout and compiler barrier were removed.
