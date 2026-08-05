# _$_16interface_widget

- Address: `0x002B8BF0`
- Size: `0x28` (40 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/interface.h`
- Reference source: `KS/SRC/interface.h`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 5.0 | 0.0 | `size40-widget-core.cpp` |
| 2 | different | 5.0 | 0.0 | `size40-widget-core-2.cpp` |
| 3 | different | 5.0 | 0.0 | `size40-interface-dtor-3.cpp` |

### Attempt 1 notes

The native empty destructor collapses to a 20-byte vptr-setting tail call.

### Attempt 2 notes

Referencing the released reticle member is optimized away and leaves the same
20-byte destructor.

### Attempt 3 notes

An explicit empty return also leaves the same native tail-call form.

## Outcome

Across three ordinary forms, the native destructor does not retain the target
call frame. The manual-vtable implementation was removed and the function was
deferred.
