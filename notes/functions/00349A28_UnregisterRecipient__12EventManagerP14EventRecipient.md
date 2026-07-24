# UnregisterRecipient__12EventManagerP14EventRecipient

- Address: `0x00349A28`
- Size: `0x84` (132 bytes)
- Object: `game/files_vsim`
- Debug source: `ks/eventmanager.cpp`
- Reference source: `KS/SRC/ks/eventmanager.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 82.5758 | 42.4242 | `candidate.cpp` |
| 2 | different | 15.625 | 2.5 | `candidate.cpp` |
| 3 | different | 55.303 | 27.2727 | `candidate.cpp` |
| 4 | different | 64.7059 | 52.9412 | `candidate.cpp` |
| 5 | different | 25.0 | 6.0606 | `candidate.cpp` |

## Outcome

Deferred the released event-recipient removal after five source-level attempts; the fixed-slot scan, compaction, and recipient count update were reconstructed, but loop register allocation remained different.
