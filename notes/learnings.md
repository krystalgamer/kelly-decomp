# Cross-function learnings

## Toolchain

- The supplied Windows EE GCC, assembler, and linker run under Wine.
- `KELLY_DECOMP_COMPILER_BARRIER()` is a documented matching-only annotation,
  not claimed original source. It emits no instruction and is used only when
  a function note demonstrates a required scheduling or sibling-call barrier.
  The source installer normalizes raw empty volatile asm from tested candidates
  to this macro before integration.
- GCC finds its bundled `2.9-ee-991111` programs relative to
  `tools/toolchain/bin/ee-gcc.exe`.
- Old GCC C++ mangling matches the ELF names directly.
- `-O2 -G0 -mvu0-use-vf0-vf31` with exceptions and RTTI disabled produces
  the target instruction shape for the first trivial virtual methods.
- Eligible game/engine objects use EE `sq`/`lq` for stack GPR saves, while
  this compiler emits `sd`/`ld`; the compiler wrapper patches only stack-based
  object instructions after compilation. Excluded runtime objects retain
  their original `sd`/`ld` assembly.
- `entity::set_zbias` shows a target `mtc1`/`nop`/`cvt.s.w` hazard sequence.
  Explicit conversion asm can reproduce it, but EE GCC then reschedules the
  paired bool/float stores; this function was deferred after five candidates.
- Generated derived destructors can differ only by the scheduler placing the
  RA stack save after vtable address setup. The compiler wrapper recognizes
  the exact semantics-independent prologue pattern and moves that save ahead
  of the `this` copy/address low half, matching the released compiler without
  changing calls, stores, or relocations. For negative absolute low halves,
  the same pattern applies the missing `%hi` carry produced by the isolated
  `.equ` workflow.
- The isolated `PanelQuad::SetZ` wrapper schedules its independent `mov.s`
  immediately before the RA stack save, while the released function saves RA
  first. The compiler wrapper recognizes that exact ten-instruction forwarding
  sequence and swaps only those two instructions, avoiding artificial
  instruction-emitting asm in the reconstructed setter.

## ELF/debug information

- `.mdebug` retains original unity-unit, included source, header, and
  procedure records.
- ELF `STT_FUNC` entries are the actual function queue. Extra `.mdebug`
  procedures can represent inlined ranges and must not be treated as
  standalone functions.
- The target BSS extends through `0x00782554`; the initial quickstart
  `bss_size` stopped `0xB0` bytes early.

## Build layout

- Generated data/rodata assembly files already include target padding to the
  next subsegment.
- GNU ld must use `SUBALIGN(1)` and must not add final section alignment, or
  relocations and the ROM size drift.
- Re-running Splat for every matched function is unnecessary. Exact raw
  `.incbin` gaps can preserve unmatched text, provided labels referenced by
  fixed data and exception relocations are recreated from the ELF and
  relocation tables. This keeps the full-ROM gate while making the build
  incrementally relinkable.
- Selector shims embed a SHA-1 of only their guarded function block. Appending
  another function to a merged source file therefore changes only the new
  shim (and, at most, a previously trailing block), while edits to an existing
  block still invalidate its own object.
