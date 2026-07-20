# get_hero_id__6entity

- Address: `0x0012A1C8`
- Size: `0x24` (36 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.cpp`
- Reference source: `KS/SRC/entity.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 2 | different | 52.7778 | 44.4444 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The first candidate exposed an access, aggregate-copy, bool-normalization, or scheduling mismatch.

### Attempt 2 notes

The previous source shape retained a branch, call-delay, or bool-normalization mismatch.

### Attempt 3 notes

A minimal layout preserves `which_hero` at 0x1f0 and the active-player fallback at game offset 0xbc.

## Outcome

The released `entity::get_hero_id` accessor matched exactly.
