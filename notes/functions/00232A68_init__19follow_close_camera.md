# init__19follow_close_camera

- Address: `0x00232A68`
- Size: `0x44` (68 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/ks_camera.cpp`
- Reference source: `KS/SRC/ks/ks_camera.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | symbol_missing | 0.0 | 0 | `follow_close_camera_init_candidate.cpp` |
| 2 | different | 2.9412 | 0.0 | `follow_close_camera_init_candidate.cpp` |
| 3 | different | 57.3529 | 47.0588 | `follow_close_camera_init_candidate.cpp` |
| 4 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The candidate copied only the two field assignments but left them behind an undefined selector guard. The compiler therefore emitted no function symbol, so this attempt did not test the released body.

### Attempt 2 notes

The unguarded candidate emitted the released `first_time` and `jump_time_elapsed` assignments at offsets `0x2D0` and `0x304`, but omitted the released `if (ksctrl) frame_advance(0.0f);`. It consequently produced only the 16-byte assignment sequence.

### Attempt 3 notes

This candidate correctly recognized the controller check at `0x214` and the old-GCC virtual dispatch through the inherited vtable at `0x8`, but modeled the call as an unrelated zero-argument `reset` on a guessed camera link. The released declarations show that the field is `game_camera::ksctrl` and the call is `follow_close_camera::frame_advance(float)` on `this`; omitting the float argument also omitted the target's `$f12` load and left the function four bytes short.

### Attempt 4 notes

Using the exact released initializer body and the declarations' inherited layout matched all 68 bytes. `game_camera::ksctrl` is at `0x214`; the inherited vtable is at `0x8`; `follow_close_camera::frame_advance(float)` occupies the descriptor at `0x78/0x7C`. Because the preceding assignment establishes `jump_time_elapsed` as zero, the compiler reuses that memory value for the released `0.0f` argument, reproducing the target `lwc1 $f12,0x304(this)` without a barrier or instruction-emitting assembly.

### Attempt 5

Not used. Attempt 4 was an exact byte-for-byte match, so the final candidate remained available and no fifth submission was made.

## Outcome

The exact released follow-close initializer matches after preserving the inherited game-camera layout and virtual frame_advance(float) dispatch: first_time is set, jump_time_elapsed is cleared, and a non-null ksctrl triggers frame_advance(0.0f).
