# find__H2ZPQ211render_data11region_infoZQ211render_data11region_info_X01X01RCX11G26random_access_iterator_tag_X01

- Address: `0x002B6178`
- Size: `0xEC` (236 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_algo.h`
- Reference source: ``
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 36.4407 | 10.1695 | `candidate-round1.cpp` |
| 2 | different | 36.4407 | 10.1695 | `candidate-round2.cpp` |
| 3 | different | 35.5932 | 6.7797 | `candidate-round3.cpp` |
| 4 | different | 36.4407 | 10.1695 | `candidate-round4.cpp` |
| 5 | different | 36.4407 | 10.1695 | `candidate-round5.cpp` |

## Outcome

Deferred after five source-faithful attempts. The exact SGI four-way random-access find, region_info equality, increments, comparisons, remainder handling, and returns are recovered, but GCC assigns the three core values to different registers and inserts extra remainder branches.
