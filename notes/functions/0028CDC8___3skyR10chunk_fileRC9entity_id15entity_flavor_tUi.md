# __3skyR10chunk_fileRC9entity_id15entity_flavor_tUi

- Address: `0x0028CDC8`
- Size: `0x34` (52 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/sky.cpp`
- Reference source: `KS/SRC/sky.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released derived constructor matched exactly through entity base construction and the sky vtable install at offset 0x8. The adjusted vtable alias reproduces the HI16 carry for the real 0x004e9730 table.

## Outcome

The released sky constructor matched exactly on the first attempt.
