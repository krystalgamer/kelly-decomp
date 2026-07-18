# get_signal_name__C10script_mfgUs

- Address: `0x0031A078`
- Size: `0xC` (12 bytes)
- Object: `game/files_script`
- Debug source: `C:/KS/SRC/script_lib_mfg.cpp`
- Reference source: `KS/SRC/script_lib_mfg.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

With assertions removed, the target returns the shared script signal-name literal through a local absolute equate.

## Outcome

The target `script_mfg::get_signal_name` constant pointer matched exactly on the first attempt.
