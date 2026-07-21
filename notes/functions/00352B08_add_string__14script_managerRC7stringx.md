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

Reconstructed the released string set insertion with distinct tree/set iterator pairs and the iterator node's 16-byte value offset. The original insert-and-dereference expression is preserved.

## Outcome

The original script string-set insertion and iterator dereference match exactly with the recovered old-STL pair conversion.
