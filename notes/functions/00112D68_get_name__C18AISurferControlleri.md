# get_name__C18AISurferControlleri

- Address: `0x00112D68`
- Size: `0x34` (52 bytes)
- Object: `game/files_ai`
- Debug source: `C:/KS/SRC/AIController.h`
- Reference source: `KS/SRC/AIController.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released member getter uses the shared AI controller and `stringx`
declarations with the original axis-name literal.

## Outcome

The local ABI model and symbol wrapper were removed; the released getter
remains exact.
