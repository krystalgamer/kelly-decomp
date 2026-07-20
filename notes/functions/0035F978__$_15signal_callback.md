# _$_15signal_callback

- Address: `0x0035F978`
- Size: `0x30` (48 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/signals.h`
- Reference source: `KS/SRC/signals.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released empty virtual destructor matched through its generated vtable restore at offset 0x10 and conditional `__builtin_delete`. The ABI-shaped wrapper avoids emitting unrelated vtable/RTTI data, and the trailing empty barrier preserves the framed call.

`KELLY_DECOMP_COMPILER_BARRIER()` is a matching-only annotation that emits no target instruction. It prevents EE GCC from applying the sibling/tail-call or scheduling transformation described above.

## Outcome

The released signal-callback destructor matched exactly through its generated vtable restore and conditional delete.
