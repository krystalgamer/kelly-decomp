# debug_dump__t13instance_bank1Z8vr_pmesh

- Address: `0x001D71A0`
- Size: `0xB8` (184 bytes)
- Object: `game/files_frontend`
- Debug source: `instance.h`
- Reference source: `KS/SRC/instance.h`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 37.234 | 8.5106 | `candidate.cpp` |
| 2 | different | 42.7083 | 2.0833 | `candidate.cpp` |
| 3 | different | 28.8793 | 5.1724 | `candidate.cpp` |
| 4 | different | 45.6522 | 4.5455 | `candidate.cpp` |
| 5 | different | 48.913 | 9.3023 | `candidate.cpp` |

### Attempt 5 notes

Reconstructed the exact released `instance_bank<vr_pmesh>` debug loop and canonical GNU 2 red-black-tree successor algorithm in reusable shared declarations. Five variants could not reproduce the target iterator stack/register schedule, so the unproven shared set and bank declarations were removed.

## Outcome

Deferred the instance-bank debug traversal after five source-level attempts could not reproduce its old-STL iterator register schedule.
