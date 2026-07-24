# get_settings__15floating_objectRC15floating_object

- Address: `0x001FD8E0`
- Size: `0x68` (104 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/floatobj.cpp`
- Reference source: `KS/SRC/ks/floatobj.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 32.6923 | 0.0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

Read all nine released floating settings fields and the water-object base call. A dead-output barrier prevented a tail call and matched on attempt 2.

## Outcome

Matched floating object settings copy
