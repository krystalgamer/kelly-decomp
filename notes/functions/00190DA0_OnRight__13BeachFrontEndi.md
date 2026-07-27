# OnRight__13BeachFrontEndi

- Address: `0x00190DA0`
- Size: `0x128` (296 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/BeachFrontEnd.cpp`
- Reference source: `KS/SRC/ks/BeachFrontEnd.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 34.7973 | 18.9189 | `candidate.cpp` |

### Attempt 1 notes

# Attempt 1 notes

Used the exact released `BeachFrontEnd::OnRight(int)` body with minimal self-contained declarations and layout padding. Sole test result was `different`: 34.7973% byte score (103/296), 18.9189% instruction score (14/74), with matching 296-byte size. No variant or diff chasing was performed.

## Outcome

The exact released BeachFrontEnd right handler differed from the target; the sole attempt scored 34.7973%.
