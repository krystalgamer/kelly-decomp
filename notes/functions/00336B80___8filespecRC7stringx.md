# __8filespecRC7stringx

- Address: `0x00336B80`
- Size: `0x50` (80 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/filespec.cpp`
- Reference source: `KS/SRC/filespec.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 90.0 | 90.0 | `candidate.cpp` |
| 2 | different | 90.0 | 90.0 | `candidate.cpp` |
| 3 | different | 90.0 | 90.0 | `candidate.cpp` |
| 4 | different | 22.619 | 4.7619 | `candidate.cpp` |
| 5 | different | 90.0 | 90.0 | `candidate.cpp` |

### Attempt 1 notes

Used the exact released filespec constructor body with three 8-byte stringx members and the released _extract call. The result was 90%; only the independent s1 save and s0 setup were scheduled in the opposite order.

### Attempt 2 notes

Expanded stringx to its released two-pointer layout and declared its destructor. Code generation remained 90% with the same two-instruction prologue scheduling mismatch.

### Attempt 3 notes

Added the matching-only compiler barrier before the released _extract call. It emitted no target instruction but did not affect the prologue schedule; score remained 90%.

### Attempt 4 notes

Tried inline member-constructor wrappers around the released stringx constructor to constrain scheduling. This changed the function shape to 84 bytes and regressed the match.

### Attempt 5 notes

Restored the released stringx declaration and made all three default member initializers explicit. The compiler still reversed the same independent prologue instructions, yielding 90%.

## Outcome

Released filespec constructor remained blocked by a two-instruction prologue scheduling mismatch after five source-level attempts.
