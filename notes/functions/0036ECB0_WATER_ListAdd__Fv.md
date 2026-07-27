# WATER_ListAdd__Fv

- Address: `0x0036ECB0`
- Size: `0x124` (292 bytes)
- Object: `game/files_wave`
- Debug source: `C:/KS/SRC/ks/water.cpp`
- Reference source: `KS/SRC/ks/water.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 76.7123 | 67.1233 | `candidate.cpp` |

### Attempt 1 notes

Attempt 1 used the exact released `WATER_ListAdd` body with the minimum
declarations needed by the isolated compiler. Sources:
`kelly-slaters-pro-surfer/KS/SRC/ks/water.cpp:504-552`,
`kelly-slaters-pro-surfer/KS/SRC/ks/water.cpp:125-131,159-187`,
`kelly-slaters-pro-surfer/NGL/PS2/ngl_ps2.h:765-786`, and
`notes/function_queue.csv:5877`.

Result: `different`; byte score 76.7123%, instruction score 67.1233%.
No later attempt was made.

## Outcome

The exact released water-list addition differed from the target; the sole attempt scored 76.7123%.
