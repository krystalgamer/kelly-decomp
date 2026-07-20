# connect_bone_abs_po__18skeleton_interfaceRCiP4bone

- Address: `0x00126CE0`
- Size: `0x34` (52 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/skeleton_interface.cpp`
- Reference source: `KS/SRC/skeleton_interface.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released bone connection matched exactly with 0x40-byte poses, skeleton pose arrays at offsets 0x8/0xc, bone pose pointers at 0x50/0x54, and the skeleton-membership flag at 0x64.

## Outcome

The released skeleton bone absolute-pose connector matched exactly on the first attempt.
