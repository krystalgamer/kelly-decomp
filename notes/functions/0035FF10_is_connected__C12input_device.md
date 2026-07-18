# is_connected__C12input_device

- Address: `0x0035FF10`
- Size: `0x8` (8 bytes)
- Object: `game/files_vsim`
- Debug source: `inputmgr.h`
- Reference source: `KS/SRC/inputmgr.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released base input-device query returns `false`.

## Outcome

The released `input_device::is_connected` predicate matched exactly on the first attempt.
