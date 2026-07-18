# __nw__11entity_animUiUiPCci

- Address: `0x00113578`
- Size: `0x1C` (28 bytes)
- Object: `game/files_anim`
- Debug source: `C:/KS/SRC/entity_anim.cpp`
- Reference source: `KS/SRC/entity_anim.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released debug allocation overload delegates to the one-argument class allocator; a compiler barrier preserves the wrapper.

## Outcome

The released `entity_anim::operator new` wrapper matched exactly on the first attempt.
