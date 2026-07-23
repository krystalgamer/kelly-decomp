# Draw__10TextString

- Address: `0x00148388`
- Size: `0x54` (84 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEPanel.cpp`
- Reference source: `KS/SRC/ks/FEPanel.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 48.8095 | 33.3333 | `candidate.cpp` |
| 2 | different | 27.8846 | 19.2308 | `candidate.cpp` |
| 3 | different | 48.8095 | 33.3333 | `candidate.cpp` |
| 4 | different | 35.7143 | 19.0476 | `candidate.cpp` |
| 5 | different | 27.8846 | 19.2308 | `candidate.cpp` |

### Attempt 1 notes

Used the exact released Draw condition with reconstructed TextString offsets and Render virtual slots. The body was otherwise aligned but omitted the target floating-point hazard nop, producing 80 bytes.

### Attempt 2 notes

Split the released OR condition into explicit checkTime and cached-time branches with a matching barrier. This expanded control flow to 104 bytes.

### Attempt 3 notes

Kept the released combined condition, introduced an explicit zero local, and placed the matching barrier before comparison. The compiler still omitted the target nop.

### Attempt 4 notes

Cached the time member before the combined condition and barrier. Register scheduling changed but the function remained 80 bytes and did not match.

### Attempt 5 notes

Expressed the released condition as two early source branches. The compiler expanded it to the same non-target 104-byte shape as attempt 2.

## Outcome

Released TextString::Draw remained blocked by one floating-point scheduling nop after five source-level condition forms.
