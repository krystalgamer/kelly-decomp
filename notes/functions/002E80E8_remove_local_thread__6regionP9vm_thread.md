# remove_local_thread__6regionP9vm_thread

- Address: `0x002E80E8`
- Size: `0x30` (48 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/region.cpp`
- Reference source: `KS/SRC/region.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 20.0 | 6.6667 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

The volatile local preserves the released stack reference passed to the shared
STL list's `remove` method and the reload for `set_suspended(false)`.

## Outcome

The manual region offset and compiler barrier were removed. A local
`set_suspended` call pointer preserves the normal second call.
