# __6cameraP6entityRC9entity_id15entity_flavor_t

- Address: `0x002C37D0`
- Size: `0xD4` (212 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/camera.cpp`
- Reference source: `KS/SRC/camera.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 91.5094 | 83.0189 | `candidate.cpp` |
| 2 | different | 94.8113 | 90.566 | `candidate.cpp` |
| 3 | different | 89.1509 | 84.9057 | `candidate.cpp` |
| 4 | different | 94.8113 | 90.566 | `candidate.cpp` |
| 5 | different | 90.566 | 88.6792 | `candidate.cpp` |

### Attempt 1 notes

The released constructor flow and recovered object offsets matched most instructions. The parent type, time-interface offsets, vtable register, and final inline setters differed.

### Attempt 2 notes

Recovered the bone parent signature, vtable register, and time-interface field offsets. Only the final five time-interface register/scheduler instructions differed; best score was 94.8113%.

### Attempt 3 notes

Pinned the mode setter registers and matched through the post-create reload, but grouped both final stores after the epilogue restores.

### Attempt 4 notes

Source-faithful inline setter methods reproduced the same five-instruction mismatch as the direct field form.

### Attempt 5 notes

Pinned the return, mode, and interface registers while reloading the dilation interface separately. The target epilogue interleave still did not match.

## Outcome

The exact released camera construction flow, recovered object offsets, bone parent signature, allocation metadata, microphone construction, and time-interface layout reached 94.8113%. Five candidates could not reproduce the final five-instruction setter and epilogue schedule.
