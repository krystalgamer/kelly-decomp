# sort_heap__H1ZP20instance_render_info_X01X01_v

- Address: `0x002F1DF8`
- Size: `0x438` (1080 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_heap.h`
- Reference source: ``
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 7.5926 | 0.7407 | `candidate.cpp` |
| 2 | different | 19.3519 | 0.7407 | `candidate.cpp` |
| 3 | different | 19.3519 | 0.7407 | `candidate.cpp` |

### Attempt 1 notes

# FIRST PASS wave 171 lane A2

Exact GCC 2 `stl_heap.h` source tested once for `0x002F1DF8 sort_heap__H1ZP20instance_render_info_X01X01_v`, using the source-faithful `sort_heap`, `__pop_heap_aux`, and `__pop_heap` bodies with released `instance_render_info` layout/assignment semantics and the existing `__adjust_heap` ABI declaration. Attempts before: 0. Result: **different**, byte score 7.5926% (82/1080), instruction score 0.7407% (2/270), candidate size 536 bytes. No alternate source, retry, attempts 2–5, diff chase, tool change, finalize, build, integration, commit, or push. Tracked tree remained read-only.

### Attempt 2 notes

Attempt 2 used the exact `sort_heap`, `pop_heap`, `__pop_heap_aux`, and
`__pop_heap` templates from the official GCC 2.95.2
`libstdc++/stl/stl_heap.h`, extracted from the release archive into local
`tmp/`. The candidate also reconstructed the released `instance_render_info`
member types and copy/assignment semantics from `iri.h`, `po.h`,
`frame_info.h`, `color.h`, and `HWOSPS2/ps2_algebra.h`.

The candidate grew from 536 to 960 bytes but remained different at 19.3519%
bytes and 0.7407% instructions. The target uses a 496-byte frame and spills
the nested matrix/vector copy pointers, while the isolated compiler keeps
those pointers in saved registers and emits a 448-byte frame.

### Attempt 3 notes

Attempt 3 retained the exact official heap templates and made the released
synthesized copy chain explicit for `matrix4x4`, `po`, and
`instance_render_info`. This tested whether GCC 2's explicit constructor RTL
would reproduce the target's additional pointer spills.

The emitted function remained 960 bytes with the same 19.3519% byte score and
0.7407% instruction score. The explicit-copy form optimized identically to
attempt 2, so the remaining 120-byte difference is isolated compilation
context/register allocation rather than missing heap or class behavior. No
inline assembly or instruction-emitting annotation was introduced.

## Outcome

The official GCC 2.95.2 heap templates and released instance_render_info copy semantics were reconstructed, but the isolated compiler kept nested copy pointers in registers and emitted 960 bytes versus the target's 1080-byte spill-heavy form; no match was found within three attempts.
