# __9slc_str_tPCciT1

- Address: `0x00350090`
- Size: `0x44` (68 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/script_library_class.cpp`
- Reference source: `KS/SRC/script_library_class.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 36.7647 | 23.5294 | `candidate.cpp` |
| 2 | different | 91.1765 | 64.7059 | `candidate.cpp` |
| 3 | different | 91.1765 | 64.7059 | `candidate.cpp` |
| 4 | different | 50.0 | 42.8571 | `candidate.cpp` |
| 5 | different | 43.4783 | 34.7826 | `candidate.cpp` |

### Attempt 1 notes

Used the released base-constructor body with an abbreviated managed-string vector; allocator placement was wrong.

### Attempt 2 notes

Restored the polymorphic base vptr at +32 and vector pointers at +36; all operations matched but the generated frame was 16 bytes smaller.

### Attempt 3 notes

Added the released allocator default argument pattern; the trivial temporary did not affect the frame.

### Attempt 4 notes

Made the allocator temporary nontrivial to model SDK cleanup; extra cleanup instructions enlarged the function.

### Attempt 5 notes

Tested a polymorphic allocator temporary matching the SDK hierarchy; its construction and cleanup also enlarged the body.

## Outcome

Deferred after five original-source and SDK-pattern attempts; constructor operations match, but the released vector allocator produces an otherwise-empty 16-byte temporary frame not reproduced in isolation.
