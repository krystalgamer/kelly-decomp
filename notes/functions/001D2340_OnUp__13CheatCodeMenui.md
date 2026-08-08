# OnUp__13CheatCodeMenui

- Address: `0x001D2340`
- Size: `0xB8` (184 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/CheatFrontEnd.cpp`
- Reference source: `KS/SRC/ks/CheatFrontEnd.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 52.1739 | 41.3043 | `cheat-nav-native-1.cpp` |
| 2 | different | 69.7917 | 58.3333 | `cheat-nav-native-2.cpp` |
| 3 | different | 57.0652 | 50.0 | `cheat-nav-native-3.cpp` |

### Attempt 1 notes

The released qualified base call compiles to a direct call and a 180-byte
function under the canonical headers.

### Attempt 2 notes

Virtual base dispatch preserves the broad control flow but uses different
vtable slots and expands to 192 bytes.

### Attempt 3 notes

A local sound-call pointer changes the branch and epilogue layout and shrinks
the function to 156 bytes.

## Outcome

The prior match depended on a compiler normalization tied to the older
incomplete header layout. It was removed rather than replaced with manual
vtable code, and the function was deferred.
