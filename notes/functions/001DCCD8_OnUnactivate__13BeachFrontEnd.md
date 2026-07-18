# OnUnactivate__13BeachFrontEnd

- Address: `0x001DCCD8`
- Size: `0x8` (8 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/BeachFrontEnd.h`
- Reference source: `KS/SRC/ks/BeachFrontEnd.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The target clears the public `exitingWithoutSelect` state at offset `0xF20`, consistent with its released uses during menu exit.

## Outcome

Reconstructing `BeachFrontEnd::OnUnactivate` as clearing `exitingWithoutSelect` at offset `0xF20` matched exactly on the first attempt.
