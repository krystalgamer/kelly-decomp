# Format__9NamesMenu

- Address: `0x001A06D0`
- Size: `0xE0` (224 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/SaveLoadFrontEnd.cpp`
- Reference source: `KS/SRC/ks/SaveLoadFrontEnd.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 12.0536 | 0.0 | `candidate-1-released.cpp` |
| 2 | different | 95.5357 | 98.2143 | `candidate-2-preflight.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate-3-linked.cpp` |
| 4 | matched | 100.0 | 100.0 | `candidate-4-consolidated.cpp` |

### Attempt 1 notes

Used the exact released formatting body and declarations. It omitted the target build's opening memory-card format-status recheck and therefore emitted only 172 bytes.

### Attempt 2 notes

Added the target-version PS2 getInfo preflight proven by the binary while retaining the released formatting body. One ABI binding and the signed-low singleton address encoding remained unresolved.

### Attempt 3 notes

Used the exact ABI names and matching singleton binding with the released body plus the binary-proven PS2 preflight. This matched all 224 bytes and 56 instructions.

### Attempt 4 notes

Revalidated the matching candidate after consolidating NamesMenu, SaveLoadFrontEnd, and GenericGameSaver declarations into their existing shared headers. The consolidated candidate still matched all bytes and instructions.

## Outcome

Matched the names-menu format path by consolidating the released SaveLoad and GenericGameSaver declarations and retaining the target-version PS2 unformatted-card preflight proven by the binary.
