# GetPointer__11OptionsMenuPCc

- Address: `0x001DC670`
- Size: `0x1C` (28 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/MainFrontEnd.h`
- Reference source: `KS/SRC/ks/MainFrontEnd.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

A minimal layout places the inherited panel at offset 0x100; retaining the result across a barrier preserves the wrapper.

## Outcome

The inline `OptionsMenu::GetPointer` panel wrapper matched exactly on the first attempt.
