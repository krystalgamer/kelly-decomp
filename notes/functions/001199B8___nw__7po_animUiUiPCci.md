# __nw__7po_animUiUiPCci

- Address: `0x001199B8`
- Size: `0x1C` (28 bytes)
- Object: `game/files_anim`
- Debug source: `C:/KS/SRC/po_anim.cpp`
- Reference source: `KS/SRC/po_anim.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released debug allocation overload delegates to the one-argument class allocator; a compiler barrier preserves the wrapper.

## Outcome

The released `po_anim::operator new` wrapper matched exactly on the first attempt.
