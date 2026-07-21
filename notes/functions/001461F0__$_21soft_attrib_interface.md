# _$_21soft_attrib_interface

- Address: `0x001461F0`
- Size: `0x44` (68 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/soft_attrib_interface.h`
- Reference source: `KS/SRC/soft_attrib_interface.h`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | symbol_missing | 0.0 | 0 | `candidate.cpp` |
| 2 | different | 5.8824 | 0.0 | `candidate.cpp` |
| 3 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 4 | different | 21.0526 | 0.0 | `candidate.cpp` |
| 5 | different | 7.3529 | 0.0 | `candidate.cpp` |

### Attempt 1 notes

Used the exact released inline empty destructor and inheritance shape; because it remained inline, the isolated translation unit emitted no standalone destructor.

### Attempt 2 notes

Moved the released empty destructor out of line; the incomplete attribute-member declarations produced only a short base-destructor chain.

### Attempt 3 notes

Restored the released integer basic-attribute member shape and vtable identities; the compiler attempted to define the same aliased template vtable locally.

### Attempt 4 notes

Allowed local generated vtables; destructor structure and size differed because the full released attribute template hierarchy is unavailable.

### Attempt 5 notes

Expressed the compiler-generated destructor effects as source-level field resets and conditional delete; scheduling and size still differed.

## Outcome

Deferred after five authentic source-level destructor/layout attempts; unavailable generated attribute-template declarations prevent reconstruction of the exact compiler-generated destructor.
