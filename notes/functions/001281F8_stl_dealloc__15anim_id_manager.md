# stl_dealloc__15anim_id_manager

- Address: `0x001281F8`
- Size: `0x104` (260 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.cpp`
- Reference source: `KS/SRC/entity.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

Released-source first pass, attempt 1 only.

The released body was preserved verbatim. The isolated candidate failed compilation because the toolchain could not resolve `<vector>` or `<map>`. Per one-shot instructions, no corrected candidate or second test was attempted.

## Outcome

The exact released animation-ID deallocator failed the isolated compile because the released STL vector and map headers were unavailable; the sole attempt scored 0%.
