# __10fps_cameraRC9entity_idP6entityP22kellyslater_controller

- Address: `0x0022C208`
- Size: `0x44` (68 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/ks_camera.cpp`
- Reference source: `KS/SRC/ks/ks_camera.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 95.5882 | 82.3529 | `candidate.cpp` |
| 2 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 3 | different | 95.5882 | 88.2353 | `candidate.cpp` |
| 4 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released constructor body was represented directly, but the flattened mock layout put `ksctrl` at `0x218` instead of the inherited `game_camera` field at `0x214`. The numeric vtable store also selected `lui`/`ori` rather than the target's signed-low `lui`/`addiu` pair.

### Attempt 2 notes

Moving `ksctrl` into the base declaration was source-faithful but placed all base data before the compiler-generated vptr. With no derived virtual declarations, the compiler emitted a local FPS vtable definition that conflicted with the external absolute alias, so assembly failed.

### Attempt 3 notes

Adding the released virtual declarations fixed the external vtable reference and reproduced the signed-low address load. The single flattened polymorphic base still placed its vptr after its data, producing `ksctrl` at `0x210` and the vptr at `0x214`.

### Attempt 4 notes

Modeling the earlier polymorphic `entity`/`camera` ancestry as a small base fixed the ABI layout: the inherited vptr remains at `0x8`, while `game_camera::ksctrl` lands at `0x214`. The adjusted vtable alias reproduces the HI16 carry and signed-low `addiu`; all 68 bytes match without barriers or inline assembly.

## Outcome

The released FPS-camera constructor matches exactly after preserving the inherited vptr at offset 0x8, placing game_camera::ksctrl at offset 0x214, and using the adjusted vtable alias required for the signed-low address load.
