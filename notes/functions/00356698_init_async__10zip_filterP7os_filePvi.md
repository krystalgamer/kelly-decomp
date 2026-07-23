# init_async__10zip_filterP7os_filePvi

- Address: `0x00356698`
- Size: `0x54` (84 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/zip_filter.cpp`
- Reference source: `KS/SRC/zip_filter.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 8.3333 | 0.0 | `candidate.cpp` |
| 2 | different | 71.4286 | 71.4286 | `candidate.cpp` |
| 3 | different | 42.8571 | 28.5714 | `candidate.cpp` |
| 4 | different | 38.0952 | 14.2857 | `candidate.cpp` |
| 5 | different | 71.4286 | 71.4286 | `candidate.cpp` |

### Attempt 1 notes

Used the exact released zip_filter::init_async body and z_stream declaration. The initial zalloc/zfree helper addresses were reversed and the final inflate call was tail-called.

### Attempt 2 notes

Corrected the exact helper addresses and added a non-emitting post-call continuation. Size matched, but independent z_stream stores and call-argument setup were scheduled differently.

### Attempt 3 notes

Kept the stream-size argument live through a non-emitting register boundary so next_in could occupy the call delay slot. This changed register allocation and regressed.

### Attempt 4 notes

Reordered the independent field assignments toward the target schedule. The compiler tail-call/continuation and store grouping still differed.

### Attempt 5 notes

Restored released assignment order through an explicit stream pointer with a non-emitting continuation. The compiler returned to the 71.43% equivalent store schedule.

## Outcome

Released zip_filter::init_async remained blocked by equivalent independent store and call-argument scheduling after five source-level attempts.
