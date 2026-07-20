# serial_in__FR10chunk_filePUi

- Address: `0x00336930`
- Size: `0x30` (48 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/chunkfile.cpp`
- Reference source: `KS/SRC/chunkfile.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released overload deserializes through the signed-int implementation into a stack local, then stores it as `unsigned int`.

## Outcome

The released unsigned-int `serial_in` overload matched exactly on the first attempt.
