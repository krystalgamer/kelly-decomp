# add_string__14script_managerRC7stringx

- Address: `0x00352B08`
- Size: `0x38` (56 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/script_object.cpp`
- Reference source: `KS/SRC/script_object.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released string-set insertion uses shared tree/set iterator records and
the iterator node's 16-byte value offset.

## Outcome

The local string, iterator, set, and manager declarations were removed.
