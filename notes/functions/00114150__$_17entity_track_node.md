# _$_17entity_track_node

- Address: `0x00114150`
- Size: `0xB8` (184 bytes)
- Object: `game/files_anim`
- Debug source: `C:/KS/SRC/entity_anim.cpp`
- Reference source: `KS/SRC/entity_anim.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 38.2979 | 12.5 | `candidate.cpp` |
| 2 | different | 41.3265 | 18.0 | `candidate.cpp` |
| 3 | different | 61.7647 | 43.1373 | `candidate.cpp` |
| 4 | different | 21.8182 | 3.6364 | `candidate.cpp` |
| 5 | symbol_missing | 0.0 | 0 | `candidate.cpp` |

### Attempt 5 notes

Used the exact released entity-track node ownership, PRS track, signal track,
and child-chain declarations.  The old compiler would not inline the released
signal-track destructor, and the explicit helper could not preserve the local
destructor symbol.  All shared experiments were reverted.

## Outcome

Deferred the released entity-track node destructor after five source-level candidates could not reproduce destructor inlining and symbol emission.
