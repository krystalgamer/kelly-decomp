# __10KSEntityPO

- Address: `0x00239EB0`
- Size: `0x38` (56 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/ksreplay.cpp`
- Reference source: `KS/SRC/ks/ksreplay.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 92.8571 | 71.4286 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

The released constructor body is empty; its code comes from the two shared
default quaternion members. The canonical quaternion assignment spelling
preserves the target store order.

## Outcome

The local vector, quaternion, and replay-PO declarations were removed.
