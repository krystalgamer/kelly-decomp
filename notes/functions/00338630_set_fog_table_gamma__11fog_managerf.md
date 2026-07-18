# set_fog_table_gamma__11fog_managerf

- Address: `0x00338630`
- Size: `0x8` (8 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/fogmgr.cpp`
- Reference source: `KS/SRC/fogmgr.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released setter writes `specified_fog_table_gamma` at offset `0x1C`; the MKS hardware update is absent.

## Outcome

The released `fog_manager::set_fog_table_gamma` setter matched exactly on the first attempt.
