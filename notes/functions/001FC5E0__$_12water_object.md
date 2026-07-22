# _$_12water_object

- Address: `0x001FC5E0`
- Size: `0x48` (72 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/floatobj.cpp`
- Reference source: `KS/SRC/ks/floatobj.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 54.1667 | 44.4444 | `candidate.cpp` |
| 2 | different | 50.0 | 44.4444 | `candidate.cpp` |
| 3 | different | 62.5 | 50.0 | `candidate.cpp` |
| 4 | different | 86.1111 | 83.3333 | `candidate.cpp` |
| 5 | different | 86.1111 | 83.3333 | `candidate.cpp` |

### Attempt 1 notes

Attempt 1 used the exact released destructor with the shared original-style hierarchy; GCC tail-called the base destructor and reordered three prologue instructions.

### Attempt 2 notes

Attempt 2 disabled #pragma interface to test released vtable emission; scheduling remained different and introduced an unresolved vtable relocation.

### Attempt 3 notes

Attempt 3 added a normalized empty barrier after despawn, but the automatic base destructor remained a tail call.

### Attempt 4 notes

Attempt 4 used the documented last-resort source-level layout shim; call behavior matched, but three prologue instructions remained reordered.

### Attempt 5 notes

Attempt 5 used typed shared-layout arguments and produced the same 86.1111% result. Deferred at the five-attempt cap.

## Outcome

Deferred due generated destructor scheduling; no assembly or byte forcing was used.
