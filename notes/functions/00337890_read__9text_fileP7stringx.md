# read__9text_fileP7stringx

- Address: `0x00337890`
- Size: `0x48` (72 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/textfile.cpp`
- Reference source: `KS/SRC/textfile.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 66.6667 | 55.5556 | `candidate.cpp` |
| 2 | different | 98.6111 | 94.4444 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The exact released read body and work buffer were used first. GCC converted the final string assignment into a sibling call, reducing the function by one instruction.

### Attempt 2 notes

A normalized empty compiler barrier after the assignment prevented the demonstrated sibling-call optimization. The remaining mismatch was the absolute-symbol high half used by isolated compilation.

### Attempt 3 notes

Adjusted only the test/link absolute alias so the signed low half resolves to the released work buffer address. With the documented tail-call barrier, the released C++ body matches exactly.

## Outcome

The released text-file string read matches exactly with shared declarations and a documented empty barrier preventing a final sibling call.
