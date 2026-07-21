# _$_17PanelAnimInstance

- Address: `0x001DA2E0`
- Size: `0x44` (68 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEAnim.h`
- Reference source: `KS/SRC/ks/FEAnim.h`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | symbol_missing | 0.0 | 0 | `candidate.cpp` |
| 2 | different | 17.1053 | 10.5263 | `candidate.cpp` |
| 3 | different | 64.7059 | 58.8235 | `candidate.cpp` |
| 4 | different | 64.7059 | 58.8235 | `candidate.cpp` |
| 5 | compile_failed | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

Used the released implicit destructor shape; the inline body emitted no standalone symbol.

### Attempt 2 notes

Moved the destructor out of line with the released virtual base; GCC emitted an extra derived-vptr store.

### Attempt 3 notes

Forced emission of the implicit destructor from a source-level use; its base destruction became a tail call.

### Attempt 4 notes

Modeled the same member/base destruction without a derived vptr; the base destructor still tail-called.

### Attempt 5 notes

Tested a narrowly scoped empty barrier to inhibit that demonstrated tail call, but this isolated spelling was rejected by the legacy compiler.

## Outcome

Deferred after five source-level attempts; the released compiler-generated destructor requires a non-tail base-destructor call that the isolated authentic declarations do not reproduce.
