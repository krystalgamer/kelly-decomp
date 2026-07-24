# Init__15nglInstanceBank

- Address: `0x003AC120`
- Size: `0x88` (136 bytes)
- Object: `ngl/ngl_instbank`
- Debug source: `C:/NGL/ps2/ngl_instbank.cpp`
- Reference source: `NGL/PS2/ngl_instbank.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 95.5882 | 94.1176 | `candidate.cpp` |
| 2 | different | 19.5946 | 2.7027 | `candidate.cpp` |
| 3 | different | 95.5882 | 94.1176 | `candidate.cpp` |
| 4 | different | 29.1667 | 19.4444 | `candidate.cpp` |
| 5 | different | 95.5882 | 94.1176 | `candidate.cpp` |

## Outcome

Released Init body consistently missed only the memset call-delay scheduling: best source-faithful candidates matched 32/34 instructions (95.59% bytes), while distinct local/volatile forms regressed.
