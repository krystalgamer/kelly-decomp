# SetSlot__18ControllerFrontEnd11device_id_t

- Address: `0x001BD318`
- Size: `0x90` (144 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/GraphicalMenuSystem.cpp`
- Reference source: `KS/SRC/ks/GraphicalMenuSystem.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 96.5278 | 94.4444 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

The released slot-label update matched after expressing the -1 sentinel test as bitwise complement, reproducing the target nor/beq sequence.

## Outcome

The released function matched exactly.
