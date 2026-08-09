# do_wevent__13rotate_weventf

- Address: `0x0033D898`
- Size: `0x40` (64 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/widget.cpp`
- Reference source: `KS/SRC/widget.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released angle interpolation and virtual rotate dispatch use the shared
widget/event hierarchy.

## Outcome

The manual widget vtable and local event layouts were removed.
