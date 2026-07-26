# __t13instance_bank1Z17entity_track_tree

- Address: `0x00120048`
- Size: `0xD4` (212 bytes)
- Object: `game/files_anim`
- Debug source: `C:/KS/SRC/instance.h`
- Reference source: `KS/SRC/instance.h`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 2 | different | 33.3333 | 16.6667 | `candidate.cpp` |
| 3 | different | 19.6721 | 1.6393 | `candidate.cpp` |
| 4 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 5 | compile_failed | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

The exact released `<set>` declaration could not compile because the isolated EE include set does not contain the original STL `set` header.

### Attempt 2 notes

Modeled the two released red-black-tree set members and their allocator/header initialization. It emitted the correct constructor symbol but used a smaller frame and different initialization schedule; best score was 33.3333%.

### Attempt 3 notes

Modeled the released default comparator temporaries to recover the target 80-byte frame and branch-likely allocation path. The temporary copies introduced an extra saved register and stack-byte traffic.

### Attempt 4 notes

Tried reserving the source-faithful constructor temporary area with a zero-instruction memory annotation. This EE compiler rejected that annotation inside the explicitly instantiated template.

### Attempt 5 notes

Retried the zero-instruction stack reservation with the compiler's accepted non-template syntax, but explicit template instantiation still rejected it. The five-attempt limit was reached.

## Outcome

The exact released empty instance-bank constructor requires the unavailable original STL set declaration. Five source-faithful reconstructions could not reproduce the target allocator/header schedule; best byte score was 33.3333%.
