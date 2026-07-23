# _$_15IconRadarWidget

- Address: `0x0016DDE0`
- Size: `0x54` (84 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/igo_widget_iconradar.cpp`
- Reference source: `KS/SRC/ks/igo_widget_iconradar.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 78.5714 | 71.4286 | `candidate.cpp` |
| 2 | different | 78.5714 | 71.4286 | `candidate.cpp` |
| 3 | different | 40.2174 | 17.3913 | `candidate.cpp` |
| 4 | different | 67.8571 | 61.9048 | `candidate.cpp` |
| 5 | different | 78.5714 | 71.4286 | `candidate.cpp` |

### Attempt 1 notes

Read the exact released destructor and IconRadarWidget/IGOWidget member declarations, then used the established generated-destructor pattern. The compiler scheduled the vtable store and first pointer load differently, reaching 78.57%.

### Attempt 2 notes

Loaded iconTextures into a source local before the vtable assignment to encourage the target first-delete delay slot. The optimizer retained the same 78.57% schedule.

### Attempt 3 notes

Preloaded both deleted pointers and removed the exit barrier. Register pressure expanded the destructor to 92 bytes and regressed the match.

### Attempt 4 notes

Restored direct member arguments and added matching barriers at entry and exit. This changed the prologue/store schedule but reached only 67.86%.

### Attempt 5 notes

Used the best single-pointer local form and preserved the base deleting mode in a const local. The same 78.57% scheduling mismatch remained.

## Outcome

Released IconRadarWidget destructor did not reproduce the target vtable-store/delete scheduling after five source-level attempts.
