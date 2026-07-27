# anim_id__15anim_id_managerRC7stringx

- Address: `0x00127FF0`
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

Exact released-source body was tested once with copied isolated declarations. The candidate failed to compile because the released toolchain could not resolve the standard `vector` and `map` headers; no second candidate was attempted.

## Outcome

The exact released animation-ID lookup failed the isolated compile because the released STL vector and map headers were unavailable; the sole attempt scored 0%.
