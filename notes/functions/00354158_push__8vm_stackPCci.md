# push__8vm_stackPCci

- Address: `0x00354158`
- Size: `0x44` (68 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/vm_stack.cpp`
- Reference source: `KS/SRC/vm_stack.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 82.3529 | 76.4706 | `candidate.cpp` |
| 2 | different | 82.3529 | 76.4706 | `candidate.cpp` |
| 3 | different | 82.3529 | 76.4706 | `candidate.cpp` |
| 4 | different | 82.3529 | 76.4706 | `candidate.cpp` |
| 5 | different | 82.3529 | 76.4706 | `candidate.cpp` |

### Attempt 1 notes

Released body and authentic vm_stack layout; compiler scheduled SP reload/add before memcpy call unlike target.

### Attempt 2 notes

Staged n, this, and SP locals; output was unchanged.

### Attempt 3 notes

Restored released move_SP helper and inline behavior; output was unchanged.

### Attempt 4 notes

Changed unused memcpy return declaration; scheduling remained unchanged.

### Attempt 5 notes

Added an empty compiler barrier after memcpy to test optimization ordering; output remained unchanged.

## Outcome

Five source-faithful scheduling variants could not reproduce the target post-call SP update order; deferred rather than force instruction scheduling.
