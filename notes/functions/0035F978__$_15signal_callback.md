# _$_15signal_callback

- Address: `0x0035F978`
- Size: `0x30` (48 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/signals.h`
- Reference source: `KS/SRC/signals.h`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 20.8333 | 8.3333 | `candidate.cpp` |
| 2 | different | 20.8333 | 8.3333 | `candidate.cpp` |
| 3 | different | 20.8333 | 8.3333 | `candidate.cpp` |

### Attempt 1 notes

Three native empty-destructor forms collapse to a 36-byte sibling-delete
sequence.

## Outcome

The target frame required manual vtable restoration and a compiler barrier.
Those matching-only constructs were removed.
