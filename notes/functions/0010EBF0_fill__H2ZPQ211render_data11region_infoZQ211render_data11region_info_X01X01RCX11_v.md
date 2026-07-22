# fill__H2ZPQ211render_data11region_infoZQ211render_data11region_info_X01X01RCX11_v

- Address: `0x0010EBF0`
- Size: `0x4C` (76 bytes)
- Object: `game/files_ai`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_algobase.h`
- Reference source: ``
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 39.4737 | 5.2632 | `candidate.cpp` |
| 2 | different | 36.8421 | 0.0 | `candidate.cpp` |
| 3 | different | 53.9474 | 31.5789 | `candidate.cpp` |
| 4 | different | 36.8421 | 0.0 | `candidate.cpp` |
| 5 | different | 30.0 | 0.0 | `candidate.cpp` |

### Attempt 1 notes

Used the canonical released GCC 2 fill loop first. A simplified rect declaration allowed GCC to replace assignment with wide integer copies, unlike the original source types.

### Attempt 2 notes

Restored the released rectf/vector2d declarations and their explicit assignment operator. Memberwise float copies appeared, but GCC selected a shorter iterator schedule.

### Attempt 3 notes

The postfix SDK loop form reached the target size and copy operations, but chose different iterator registers and branch-delay placement.

### Attempt 4 notes

An explicit current iterator optimized back to the shorter schedule.

### Attempt 5 notes

Maintaining parallel current and termination iterators added an instruction and did not reproduce target allocation.

## Outcome

The source-faithful GCC fill template reproduces memberwise region copies, but available GCC chooses a different iterator register and delay-slot schedule.
