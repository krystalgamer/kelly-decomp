# __make_heap__H3ZP20instance_render_infoZ20instance_render_infoZi_X01X01PX11PX21_v

- Address: `0x002F1C28`
- Size: `0x1CC` (460 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_heap.h`
- Reference source: ``
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 9.7826 | 2.6087 | `candidate.cpp` |

### Attempt 1 notes

# FIRST PASS wave84 A2 — 0x002F1C28

- Confirmed unprepared/zero attempts before preparation; prepared status reported 0 used.
- Tested exactly one LF/ASCII, self-contained candidate using the faithful GCC 2.95.2 `stl_heap.h` `__make_heap` template body.
- Declarations were limited to the released `instance_render_info` layout and the existing `__adjust_heap` ABI; no includes were used.
- Result: **different**; byte score 9.7826% (45/460), instruction score 2.6087% (3/115); candidate 232 bytes, target 460 bytes.
- No alternate algorithm, assembly, annotations, variants, retries, attempts 2–5, or post-test diff chase.
- Tracked/reference files remained read-only; no finalize, integration, build, or git operation was performed.

## Outcome

The exact released instance-render heap construction body differed at 9.7826% byte score; no source variant was attempted.
