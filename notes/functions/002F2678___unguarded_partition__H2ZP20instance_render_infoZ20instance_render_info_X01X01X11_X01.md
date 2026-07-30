# __unguarded_partition__H2ZP20instance_render_infoZ20instance_render_info_X01X01X11_X01

- Address: `0x002F2678`
- Size: `0x434` (1076 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_algo.h`
- Reference source: ``
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 20.539 | 1.1364 | `candidate.cpp` |

### Attempt 1 notes

# FIRST PASS wave 170 lane B5

Tested exactly once using the released GCC 2/libstdc++ `stl_algo.h`
`__unguarded_partition` template body, instantiated for
`instance_render_info*` and `instance_render_info`. The source-faithful
scratch context follows released `KS/SRC/iri.h`: the 144-byte value layout,
inline `operator<`, released assignment body, and `frame_info::operator=`.
Existing algorithm prior art came from `src/NGL/ps2/ngl_ps2.cpp`.

Result: `different`, 20.5390% bytes (221/1076) and 1.1364% instructions
(3/264); candidate size 904 versus target 1076. Candidate SHA-1:
`bde76540f69c1d2e8940b6d1231f3e262b86f94a`.

No alternate source, retry, diff chase, tooling change, finalization, build, commit, push, or tracked edit was performed.

## Outcome

The exact released unguarded-partition template candidate compiled but differed at 20.5390% bytes and 1.1364% instructions; no alternate source was attempted.
