# _$_7MapData

- Address: `0x0018AFA0`
- Size: `0xF8` (248 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/Map.cpp`
- Reference source: `KS/SRC/ks/Map.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 32.197 | 15.1515 | `candidate.cpp` |

### Attempt 1 notes

Exact released `MapData` destructor with the authentic 480-byte `PanelQuad4` layout and map/path fields. Array cleanup and virtual element destruction reproduce, but EE GCC hoisted the deleting flag differently and tail-called the final object delete with a duplicated epilogue, producing 264 bytes instead of 248.

## Outcome

Exact released map destructor differed in deleting-flag scheduling and final tail call.
