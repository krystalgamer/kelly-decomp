# _$_14EventRecipient

- Address: `0x00349B98`
- Size: `0x5C` (92 bytes)
- Object: `game/files_vsim`
- Debug source: `ks/eventmanager.cpp`
- Reference source: `KS/SRC/ks/eventmanager.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Read the exact released destructor, global manager/vtable layout, unregister call, and deleting-destructor flags. It matched on attempt 1.

## Outcome

Matched event recipient destructor
