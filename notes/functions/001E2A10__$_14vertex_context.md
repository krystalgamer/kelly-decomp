# _$_14vertex_context

- Address: `0x001E2A10`
- Size: `0x24` (36 bytes)
- Object: `game/files_hwosps2`
- Debug source: `C:/KS/SRC/hwosps2/ps2_rasterize.cpp`
- Reference source: `KS/SRC/HWOSPS2/ps2_rasterize.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 19.4444 | 0.0 | `vertex-context-dtor-1.cpp` |
| 2 | different | 19.4444 | 0.0 | `vertex-context-dtor-2.cpp` |
| 3 | different | 19.4444 | 0.0 | `vertex-context-dtor-3.cpp` |

### Attempt 1 notes

Exact released empty destructor with the canonical `vertex_context`
declaration. Native code generation is 28 bytes rather than the target 36.

### Attempt 2 notes

Retried the empty destructor with the released field and enum layout declared
directly. The compiler generated the same shorter deleting-destructor form.

### Attempt 3 notes

Retried the canonical destructor with an explicit source-level return. Code
generation remained 28 bytes and did not reproduce the released call frame.

## Outcome

Released empty destructor emits a shorter deleting-destructor form; the manual extern-C wrapper was removed, and three native C++ declaration contexts did not match.
