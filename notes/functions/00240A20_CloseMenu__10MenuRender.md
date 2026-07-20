# CloseMenu__10MenuRender

- Address: `0x00240A20`
- Size: `0x34` (52 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/menusys.cpp`
- Reference source: `KS/SRC/ks/menusys.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 5.1724 | 0.0 | `candidate.cpp` |
| 2 | different | 26.6667 | 0.0 | `candidate.cpp` |
| 3 | different | 66.0714 | 64.2857 | `candidate.cpp` |
| 4 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Used the released strcpy-empty loop with an absolute empty-string alias. The compiler could not see the aliased literal contents and emitted calls to strcpy, growing the function to 116 bytes.

### Attempt 2 notes

Reduced the known empty-string copy to its single terminating-byte store. EE GCC hoisted the byte load out of the loop and placed the state-pointer increment before the branch, producing 60 bytes.

### Attempt 3 notes

Marked the empty byte volatile to retain the target per-iteration load. All loop operations then matched, but the state-pointer increment remained before the branch instead of in its delay slot, producing 56 bytes.

### Attempt 4 notes

The released operation clears the first byte and state of all 16 menu lines, then clears `active`. Instruction-emitting inline assembly is limited to that exact loop because EE GCC otherwise moves the state-pointer increment out of the target branch delay slot; `.set noreorder` preserves precisely the target schedule.

## Outcome

The released menu-renderer close reset matched exactly.
