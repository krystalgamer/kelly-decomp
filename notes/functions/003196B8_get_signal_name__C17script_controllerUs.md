# get_signal_name__C17script_controllerUs

- Address: `0x003196B8`
- Size: `0xC` (12 bytes)
- Object: `game/files_script`
- Debug source: `C:/KS/SRC/script_lib_controller.cpp`
- Reference source: `KS/SRC/script_lib_controller.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

With assertions removed, the target returns a resolved script signal-name literal through a local absolute equate.

## Outcome

The target `script_controller::get_signal_name` constant pointer matched exactly on the first attempt.
