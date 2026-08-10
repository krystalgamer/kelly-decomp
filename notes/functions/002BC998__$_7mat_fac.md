# _$_7mat_fac

- Address: `0x002BC998`
- Size: `0x5C` (92 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/matfac.cpp`
- Reference source: `KS/SRC/matfac.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Read the exact released texture-release destructor and generated vtable/delete behavior. The source-faithful deleting destructor matched on attempt 1.

## Outcome

The handwritten compiler-generated destructor was removed and the shipped
wrapper was deferred.
