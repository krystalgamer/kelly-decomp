# SetTrickRegion__22kellyslater_controller11TRICKREGION

- Address: `0x0021E408`
- Size: `0x3C` (60 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/kellyslater_controller.cpp`
- Reference source: `KS/SRC/ks/kellyslater_controller.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 5.0 | 0.0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released region update and conditional event dispatch were reconstructed with exact fields and addresses, but EE GCC converted the conditional final dispatch into a sibling tail call and emitted only 48 bytes.

### Attempt 2 notes

The shared controller and event-manager declarations plus a local dispatch
pointer preserve the framed conditional event call.

## Outcome

The local controller/event layouts and compiler barrier were removed.
