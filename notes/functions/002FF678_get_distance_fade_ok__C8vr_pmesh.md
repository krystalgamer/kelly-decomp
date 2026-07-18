# get_distance_fade_ok__C8vr_pmesh

- Address: `0x002FF678`
- Size: `0xC` (12 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/pmesh.h`
- Reference source: `KS/SRC/pmesh.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released override negates the word-sized `has_translucent_verts` flag at offset `0x6C`.

## Outcome

The released `vr_pmesh::get_distance_fade_ok` negated flag matched exactly on the first attempt.
