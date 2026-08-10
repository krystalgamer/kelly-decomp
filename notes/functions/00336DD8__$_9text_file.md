# _$_9text_file

- Address: `0x00336DD8`
- Size: `0x54` (84 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/textfile.cpp`
- Reference source: `KS/SRC/textfile.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Read the exact released text_file destructor, buffer offset, os_free32 call, os_file base destruction, and deleting-mode behavior. Reused the established non-tail delete continuation pattern and matched byte-exactly.

## Outcome

The handwritten generated destructor was removed. A native isolated
definition additionally destroys the stash member and exceeds the shipped
function, so the wrapper is deferred.
