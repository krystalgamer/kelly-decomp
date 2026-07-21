# MemoryLeakDump__FP9MenuEntryi

- Address: `0x00236900`
- Size: `0x44` (68 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/ksdbmenu.cpp`
- Reference source: `KS/SRC/ks/ksdbmenu.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 39.7059 | 17.6471 | `memoryleakdump_candidate.cpp` |
| 2 | compile_failed | 0.0 | 0 | `memoryleakdump_candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `memoryleakdump_candidate.cpp` |

## Outcome

Released menu action matched exactly on attempt 3; integrated, verified against the ROM checksum and reference checks, and committed through the normal queue path.
