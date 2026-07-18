# OnDown__15CreditsFrontEndi

- Address: `0x001DDEA0`
- Size: `0xC` (12 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/ExtrasFrontEnd.h`
- Reference source: `KS/SRC/ks/ExtrasFrontEnd.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released hook sets the word-sized `down_pressed` flag at offset `0x174`.

## Outcome

The released `CreditsFrontEnd::OnDown` flag set matched exactly on the first attempt.
