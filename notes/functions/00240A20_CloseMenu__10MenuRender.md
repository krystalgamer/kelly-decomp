# CloseMenu__10MenuRender

- Address: `0x00240A20`
- Size: `0x34` (52 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/menusys.cpp`
- Reference source: `KS/SRC/ks/menusys.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 5.1724 | 0.0 | `candidate.cpp` |
| 2 | different | 26.6667 | 0.0 | `candidate.cpp` |
| 3 | different | 66.0714 | 64.2857 | `candidate.cpp` |
| 4 | policy-invalid | 100.0 | 100.0 | `candidate.cpp` |
| 5 | different | 46.4286 | 14.2857 | `candidate.cpp` |

### Attempt 1 notes

Used the released strcpy-empty loop with an absolute empty-string alias. The compiler could not see the aliased literal contents and emitted calls to strcpy, growing the function to 116 bytes.

### Attempt 2 notes

Reduced the known empty-string copy to its single terminating-byte store. EE GCC hoisted the byte load out of the loop and placed the state-pointer increment before the branch, producing 60 bytes.

### Attempt 3 notes

Marked the empty byte volatile to retain the target per-iteration load. All loop operations then matched, but the state-pointer increment remained before the branch instead of in its delay slot, producing 56 bytes.

### Attempt 4 notes

Invalid attempt. It replaced the released C++ loop with the target instructions and was not a decompilation.

### Attempt 5 notes

Used explicit text and state pointers with all updates expressed in the C++ loop increment. EE GCC emitted 56 bytes and still did not reproduce the target backedge delay slot.

## Outcome

Deferred after five attempts. The source-level versions preserve the released behavior but do not reproduce the target schedule; the hand-written assembly match was removed.
