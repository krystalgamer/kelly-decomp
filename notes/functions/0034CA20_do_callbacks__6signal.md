# do_callbacks__6signal

- Address: `0x0034CA20`
- Size: `0xF4` (244 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/signal.cpp`
- Reference source: `KS/SRC/signal.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 25.4098 | 1.6393 | `candidate.cpp` |

### Attempt 1 notes

Exact released `signal::do_callbacks` body with the authentic callback hierarchy and SGI list iterator/erase behavior. It emitted the same callback, one-shot deletion, unlink, and pool-return operations, but kept iterator state in registers and produced 208 bytes instead of the target's 244-byte stack-temporary form.

## Outcome

Exact released callback loop differed in iterator temporary allocation.
