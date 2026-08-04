# __12input_device

- Address: `0x00343918`
- Size: `0x1C` (28 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/inputmgr.cpp`
- Reference source: `KS/SRC/inputmgr.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The shared `inputmgr.h` declaration initializes the invalid device id and lets
the compiler install the abstract input-device vtable at offset four.

## Outcome

The exact released constructor matches without a local class or manual vtable.
