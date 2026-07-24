# find_instance__15trigger_managerRC7stringx

- Address: `0x0028D7B0`
- Size: `0x84` (132 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/trigger.cpp`
- Reference source: `KS/SRC/trigger.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 10.6061 | 0.0 | `candidate.cpp` |
| 2 | different | 25.6944 | 5.5556 | `candidate.cpp` |
| 3 | different | 22.8571 | 5.7143 | `candidate.cpp` |
| 4 | different | 66.6667 | 30.303 | `candidate.cpp` |
| 5 | different | 22.8571 | 5.7143 | `candidate.cpp` |

## Outcome

Deferred the released trigger-instance lookup after five source-level attempts; linked-list traversal and fast string-buffer equality were reconstructed, but the original inlined pointer-loop register allocation did not match.
