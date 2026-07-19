# Project state

- Target ELF: `SLUS_203.34`
- ELF SHA-1: `59b44bf075d88538623082d14275cc4fd4e999cf`
- Flat ROM SHA-1: `f38eaf55ee47eec1bd8ec25b0e2390d9bf2d4832`
- Entrypoint: `0x00100008`
- Compiler: EE GCC `2.9-ee-991111b/r4`
- Reference revision: `7c3ade041cc03409a3114ce3ba4a70053c6e4e3b`

The ELF contains 9,078 function symbols. ECOFF `.mdebug` records map 9,076
of them exactly to original source files. Current scope classification:

| Classification | Functions |
| --- | ---: |
| Eligible game/engine | 7,905 |
| Handwritten assembly | 68 |
| SDK/runtime | 1,082 |
| Third-party | 21 |
| Unmapped | 2 |

The main game was compiled as these unity translation units:

`files_ai`, `files_anim`, `files_entity`, `files_frontend`,
`files_hwosps2`, `files_kellyslater`, `files_misc1`, `files_misc2`,
`files_misfits`, `files_script`, `files_vsim`, and `files_wave`.

NGL, NSL, and NVL were linked as separate engine libraries.

Reconstructed source mirrors the recovered reference paths under `src/`.
Address-selected blocks are compiled through generated one-function shims, so
grouping source by original file does not change target object placement.

The all-assembly reconstruction builds with native modern MIPS binutils.
Input-section subalignment is forced to one byte because Splat's generated
assembly already contains the target's inter-section padding.

Continuous function integration uses a fast incremental configuration after
one successful full Splat build. Unmatched text gaps are assembled from exact
target ROM bytes with the ELF and relocation-required labels restored;
matched selector objects and the original fixed data/BSS objects remain in
link order. Every function cycle still links and checks the complete ROM.
The normal `configure.py` command dispatches to this path after bootstrap;
`configure.py --full` remains the deterministic Splat fallback.

The EE object fixup layer also normalizes a generated-destructor scheduling
pattern where the supplied compiler delays the RA save until after vtable
address setup. The correction is guarded by the complete seven-instruction
prologue/call/store signature.
