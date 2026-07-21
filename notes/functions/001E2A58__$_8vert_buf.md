# _$_8vert_buf

- Address: `0x001E2A58`
- Size: `0x44` (68 bytes)
- Object: `game/files_ps2_rasterize`
- Reference source: `KS/SRC/HWOSPS2/ps2_rasterize.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | symbol_missing | 0.0 | 0 | `candidate.cpp` |
| 2 | different | 22.7273 | 9.0909 | `candidate.cpp` |
| 3 | different | 55.2632 | 47.3684 | `candidate.cpp` |
| 4 | different | 29.4118 | 23.5294 | `candidate.cpp` |
| 5 | compile_failed | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

Used the released inline declaration without an out-of-line body; no symbol was emitted.

### Attempt 2 notes

Defined the exact released destructor but incorrectly modeled it as virtual, adding a vptr store.

### Attempt 3 notes

Restored the released nonvirtual destructor; deconstruction matched, but GCC tail-called conditional delete.

### Attempt 4 notes

Restored the released ref base declaration; its modeled destructor introduced an extra base-destructor call.

### Attempt 5 notes

Tried a narrow empty barrier for the demonstrated delete tail call, but the isolated spelling was rejected by the legacy compiler.

## Outcome

Deferred after five source-only attempts; the authentic destructor body is reconstructed, but isolated GCC tail-calls delete where the target retains a normal call.
