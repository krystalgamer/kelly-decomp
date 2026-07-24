# process_vertex_contexts__8material

- Address: `0x00339800`
- Size: `0x80` (128 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/material.cpp`
- Reference source: `KS/SRC/material.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 50.7812 | 31.25 | `candidate.cpp` |
| 2 | different | 47.6562 | 31.25 | `candidate.cpp` |
| 3 | different | 48.4848 | 33.3333 | `candidate.cpp` |
| 4 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 4 notes

The released material vertex-context processing matched after reconstructing the exact stringx and anim_texture array layout.

## Outcome

The released material vertex-context processing matched exactly on the fourth attempt.
