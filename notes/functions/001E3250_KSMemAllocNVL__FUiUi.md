# KSMemAllocNVL__FUiUi

- Address: `0x001E3250`
- Size: `0x30` (48 bytes)
- Object: `game/files_hwosps2`
- Debug source: `C:/KS/SRC/ps2main.cpp`
- Reference source: `KS/SRC/ps2main.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 58.3333 | 58.3333 | `candidate.cpp` |
| 2 | different | 70.8333 | 66.6667 | `candidate.cpp` |
| 3 | different | 60.4167 | 58.3333 | `candidate.cpp` |
| 4 | different | 43.75 | 41.6667 | `candidate.cpp` |
| 5 | different | 70.8333 | 66.6667 | `candidate.cpp` |

### Attempt 1 notes

The direct macro-expanded call preserved all values but scheduled the absolute
name address before the size move and RA save. Best byte score: 58.3333%.

### Attempt 2 notes

The established page-base-plus-offset pointer recovered the target first three
instructions and reached the best score, 70.8333%, but placed the RA save
before address materialization and reversed the low-half/alignment moves.

### Attempt 3 notes

Constraining the size argument changed the address to a `lui`/`ori` sequence
and moved the RA save too early.

### Attempt 4 notes

A leading scheduling barrier placed the stack adjustment and RA save before
the released alignment preservation and address setup.

### Attempt 5 notes

Combining the leading barrier with the page-base pointer restored the 70.8333%
candidate but could not reproduce the target interleave.

## Outcome

Five faithful allocation wrappers could not reproduce the target frame, address, and argument-move interleave; best byte score was 70.8333%.
