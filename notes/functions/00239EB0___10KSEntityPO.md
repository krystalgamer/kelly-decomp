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

The released constructor body is empty; its code comes from the two default quaternion members. Reconstructing the released quaternion assignment spelling (`a = 1.0f; b = c = d = 0.0f`) preserves the target store order exactly.

## Outcome

The replay entity-PO constructor matches through its source-authentic default quaternion initialization.
