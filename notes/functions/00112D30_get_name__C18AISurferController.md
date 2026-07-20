# get_name__C18AISurferController

- Address: `0x00112D30`
- Size: `0x34` (52 bytes)
- Object: `game/files_ai`
- Debug source: `C:/KS/SRC/AIController.h`
- Reference source: `KS/SRC/AIController.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 23.0769 | 15.3846 | `candidate.cpp` |
| 2 | different | 30.8824 | 17.6471 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Modeled `stringx` as an empty declaration with only its constructor. EE GCC treated the return as a one-byte aggregate, constructed it on the stack, and returned a byte rather than using the target hidden return object.

### Attempt 2 notes

Added one pointer field and the nontrivial destructor. The four-byte aggregate still returned in `v0`; the compiler created and destroyed a stack temporary, growing the function to 68 bytes.

### Attempt 3 notes

The released inline getter matched exactly after preserving the real two-pointer `stringx` layout, which makes EE GCC construct directly into the hidden return object. The literal alias carries the original `ai_player_ctlr` address.

## Outcome

The released AI controller name getter matched exactly with the recovered stringx return ABI.
