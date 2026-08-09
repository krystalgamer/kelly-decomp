# _$_19rocket_guidance_sys

- Address: `0x002A9470`
- Size: `0x34` (52 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/guidance_sys.cpp`
- Reference source: `KS/SRC/guidance_sys.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 7.6923 | 0.0 | `candidate.cpp` |
| 2 | different | 7.6923 | 0.0 | `candidate.cpp` |
| 3 | different | 7.6923 | 0.0 | `candidate.cpp` |

### Attempt 1 notes

Three native empty-destructor forms collapse to a 20-byte guidance-system tail
call.

## Outcome

The target's inlined base cleanup required manual vtable restoration and a
compiler barrier. Those matching-only constructs were removed.
