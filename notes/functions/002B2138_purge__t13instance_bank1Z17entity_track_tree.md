# purge__t13instance_bank1Z17entity_track_tree

- Address: `0x002B2138`
- Size: `0x188` (392 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/instance.h`
- Reference source: `KS/SRC/instance.h`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 34.4388 | 6.25 | `candidate.cpp` |

### Attempt 1 notes

Attempt 1 used the exact released `instance_bank<T>::purge` template body with minimal faithful declarations for `stringx`, `entity_track_tree`, and the two set types. The initially missing legacy standard headers were repaired only through scratch-local identical-candidate include infrastructure; the candidate hash did not change. Result `different`, byte score 34.4388, instruction score 6.2500, candidate size 384 versus target size 392. No declaration variant, alternate body, diff chase, or additional candidate was attempted. Citations: kelly-slaters-pro-surfer/KS/SRC/instance.h:245-280, kelly-slaters-pro-surfer/KS/SRC/entity_anim.h:63-108, kelly-slaters-pro-surfer/KS/SRC/stringx.h:229-283, tmp/functions/002B2138_purge__t13instance_bank1Z17entity_track_tree/attempt-1/result.json.

## Outcome

The exact released entity-track-tree instance-bank purge differed at 34.4388% byte score; no source variant was attempted.
