# entity_signal_callback_attack__FP9signallerPCc

- Address: `0x00139270`
- Size: `0x8` (8 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.cpp`
- Reference source: `KS/SRC/entity.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The attack callback body is disabled by BIGCULL. As with the footstep
callback, the original static function is exported only across the synthetic
per-function object boundary.

## Outcome

The BIGCULL build removes the attack callback body. Keeping the original static source shape with a split-only visibility directive matched immediately and preserved the exact ROM checksum.
