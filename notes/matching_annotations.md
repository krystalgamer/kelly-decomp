# Matching-only source annotations

Reconstructed source should follow the released source whenever it produces
the target code. Compiler-control annotations are not claimed to be original
game source and must only be used after a source-faithful candidate exposes a
specific code-generation mismatch.

## `KELLY_DECOMP_COMPILER_BARRIER()`

This annotation expands to an empty volatile inline-assembly statement. It
emits no instruction or data. Its only effect is to stop EE GCC from moving
operations across that source point.

The common use is a tiny forwarding function where EE GCC otherwise replaces
the target's normal `jal`/return frame with a sibling or tail call. A few
functions use it to preserve a demonstrated load/store or branch schedule.

Rules:

- Prefer the released source with no annotation.
- Add the annotation only after the isolated diff demonstrates the exact
  compiler transformation it prevents.
- Explain the reason in that function's note/attempt record.
- Do not use it to hide logic, data-layout, type, or calling-convention errors.
- Remove it if an equally faithful source shape matches without it.

The macro is defined in `include/decomp_annotations.h` and injected into each
generated selector shim. Candidate files may retain the raw empty-asm spelling
while they are being tested, but `install_function_source()` normalizes that
spelling to this macro before adding a matched block to committed source.
