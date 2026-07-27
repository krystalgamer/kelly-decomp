# nglSaveTexture__FP10nglTexturePCc

- Address: `0x003A0E78`
- Size: `0x11C` (284 bytes)
- Object: `ngl/ngl_ps2`
- Debug source: `C:/NGL/ps2/ngl_ps2.cpp`
- Reference source: `NGL/PS2/ngl_ps2.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 17.6056 | 5.8824 | `candidate.cpp` |

### Attempt 1 notes

# Attempt 1

- Used the exact released `nglSaveTexture` body from `kelly-slaters-pro-surfer/NGL/PS2/ngl_ps2.cpp:6030-6058` without functional changes.
- Supplied only the released declaration details needed for isolated compilation: `nglTexture` accessed-field offsets/size, `nglFixedString::c_str`, allocator default alignment, and called function/global declarations.
- Result: **different** — byte score 17.6056%, instruction score 5.8824%. No second candidate was tested.

## Outcome

The exact released NGL texture saver differed from the target; the sole attempt scored 17.6056%.
