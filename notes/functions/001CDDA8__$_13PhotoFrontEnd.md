# _$_13PhotoFrontEnd

- Address: `0x001CDDA8`
- Size: `0x108` (264 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/PhotoFrontEnd.cpp`
- Reference source: `KS/SRC/ks/PhotoFrontEnd.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 8.7121 | 1.5152 | `candidate.cpp` |

### Attempt 1 notes

# Attempt 1

- Queue was clean `pending` with zero attempts and no pre-existing address scratch.
- Used the released `PhotoFrontEnd::~PhotoFrontEnd` body verbatim with self-contained declarations preserving the released inheritance and three submenu members.
- Verified the candidate was not the generated placeholder before testing.
- Result: **different** — byte score 8.7121%, instruction score 1.5152%; candidate 160 bytes versus target 264 bytes. Exactly one test was run; no variants were attempted.

## Outcome

The exact released photo-frontend destructor differed from the target; the sole attempt scored 8.7121%.
