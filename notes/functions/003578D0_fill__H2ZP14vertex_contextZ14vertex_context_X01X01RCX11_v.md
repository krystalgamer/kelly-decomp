# fill__H2ZP14vertex_contextZ14vertex_context_X01X01RCX11_v

- Address: `0x003578D0`
- Size: `0x74` (116 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_algobase.h`
- Reference source: ``
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 69.697 | 64.5161 | `candidate.cpp` |
| 2 | different | 86.2903 | 93.1034 | `candidate.cpp` |
| 3 | different | 92.2414 | 86.2069 | `candidate.cpp` |
| 4 | different | 55.1724 | 24.1379 | `candidate.cpp` |
| 5 | different | 55.1724 | 24.1379 | `candidate.cpp` |

## Outcome

Deferred vertex-context filling after five source-level attempts; the released 44-byte assignment loop reproduced, but the target final aligned-word load/store ordering did not.
