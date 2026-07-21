# Load__15LogbookFrontEnd

- Address: `0x001D5E40`
- Size: `0x40` (64 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/LogbookFrontEnd.cpp`
- Reference source: `KS/SRC/ks/LogbookFrontEnd.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 93.75 | 87.5 | `candidate.cpp` |
| 2 | different | 54.6875 | 50.0 | `candidate.cpp` |
| 3 | different | 92.1875 | 81.25 | `candidate.cpp` |
| 4 | different | 93.75 | 87.5 | `candidate.cpp` |
| 5 | different | 89.0625 | 87.5 | `candidate.cpp` |

### Attempt 1 notes

The authentic menu lookup and panel pointer call matched the body but not the target prologue save scheduling.

### Attempt 2 notes

A narrow pre-call barrier over-constrained the body and reduced the match.

### Attempt 3 notes

A direct constant string address changed addiu to ori and retained the prologue mismatch.

### Attempt 4 notes

Inlining the menu expression with a post-call barrier retained the prologue save-order mismatch.

### Attempt 5 notes

The literal released-source spelling retained the same save-order mismatch and unresolved literal address difference.

## Outcome

Five source-authentic logbook panel lookup attempts could not reproduce the target prologue scheduling.
