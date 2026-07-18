# get_func_name__15script_callback

- Address: `0x0034BE60`
- Size: `0xC` (12 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/signal.cpp`
- Reference source: `KS/SRC/signal.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released accessor loads the instance pointer at `0x18` and returns the function name at instance offset `0xC`.

## Outcome

The released `script_callback::get_func_name` nested address calculation matched exactly on the first attempt.
