# kill_anim__6entityi

- Address: `0x00134918`
- Size: `0x30` (48 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.cpp`
- Reference source: `KS/SRC/entity.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 57.6923 | 46.1538 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `size48-anim-core.cpp` |

### Attempt 2 notes

The released method gets the requested animation tree and conditionally forwards it to the global world system. The trailing empty compiler barrier prevents the conditional call from becoming a sibling jump.

### Attempt 3 notes

The shared world declaration and a local function pointer preserve the
conditional normal call without a compiler barrier.

## Outcome

The compiler barrier and local world declaration were removed.
