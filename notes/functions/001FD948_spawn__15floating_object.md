# spawn__15floating_object

- Address: `0x001FD948`
- Size: `0x3C` (60 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/floatobj.cpp`
- Reference source: `KS/SRC/ks/floatobj.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 15.0 | 0.0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released field checks/resets and base spawn call were reconstructed with exact offsets, but EE GCC converted the final base call into a sibling tail call and emitted a 48-byte leaf form.

### Attempt 2 notes

The shared floating-object layout and a local base-spawn pointer preserve the
framed call after the state resets.

## Outcome

The local object layout and compiler barrier were removed.
