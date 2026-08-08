# OnDown__13CheatCodeMenui

- Address: `0x001D23F8`
- Size: `0xBC` (188 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/CheatFrontEnd.cpp`
- Reference source: `KS/SRC/ks/CheatFrontEnd.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 53.1915 | 42.5532 | `cheat-nav-native-1.cpp` |
| 2 | different | 70.4082 | 59.1837 | `cheat-nav-native-2.cpp` |
| 3 | different | 57.9787 | 51.0638 | `cheat-nav-native-3.cpp` |

### Attempt 1 notes

The released qualified base call compiles to a direct call and a 184-byte
function under the canonical headers.

### Attempt 2 notes

Virtual base dispatch preserves the broad control flow but uses different
vtable slots and expands to 196 bytes.

### Attempt 3 notes

A local sound-call pointer changes the branch and epilogue layout and shrinks
the function to 160 bytes.

## Outcome

The prior match depended on the older incomplete header layout. It was removed
rather than replaced with manual vtable code, and the function was deferred.
