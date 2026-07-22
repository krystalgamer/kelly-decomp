# serial_in__FR10chunk_fileP9vm_symbol

- Address: `0x00354220`
- Size: `0x48` (72 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/vm_symbol.cpp`
- Reference source: `KS/SRC/vm_symbol.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 69.4444 | 61.1111 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The exact released sequence reused the shared vm_symbol declaration, but GCC converted the final integer serial_in call into a sibling call.

### Attempt 2 notes

A normalized empty compiler barrier after the final call prevents the demonstrated sibling-call optimization and matches exactly.

## Outcome

The released VM symbol deserialization matches exactly with shared declarations and a documented final-call barrier.
