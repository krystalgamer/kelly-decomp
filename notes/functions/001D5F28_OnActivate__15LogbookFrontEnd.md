# OnActivate__15LogbookFrontEnd

- Address: `0x001D5F28`
- Size: `0x17C` (380 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/LogbookFrontEnd.cpp`
- Reference source: `KS/SRC/ks/LogbookFrontEnd.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 14.4737 | 5.2632 | `candidate.cpp` |

### Attempt 1 notes

# Attempt 1

Used the exact released `LogbookFrontEnd::OnActivate` body with minimal declarations for its class layout, inherited activation call, helpbar inlines, and string type. The single permitted test compiled but differed: 55/380 bytes and 5/95 instructions matched. No retry or diff chase was performed.

## Outcome

Exact released-source first pass for logbook activation did not match.
