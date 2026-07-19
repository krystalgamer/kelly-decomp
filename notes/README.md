# Decompilation bookkeeping

`function_queue.csv` is the durable work queue. Eligible functions are
ordered by `size_bytes`, then address.

## Statuses

- `pending`: eligible and not attempted
- `matched`: integrated source passed the isolated bench and full ROM checksum
- `deferred`: five candidates were attempted without a match
- `excluded_handwritten`: known handwritten PS2/VU assembly
- `excluded_sdk_runtime`: Sony SDK, compiler runtime, or standard library code
- `excluded_third_party`: third-party library code outside game/engine scope
- `excluded_unmapped`: no reliable game/engine source ownership

## Attempt definition

An attempt is one distinct candidate source submitted to
`tools/function_test.py test`. Re-testing an identical source hash does not
consume an attempt. Compiler/build infrastructure failures are fixed before
continuing and are not disguised as successful candidates.

No function may exceed five distinct candidates.

## Atomic function cycle

1. `tools/decomp.py next` selects the smallest pending function.
2. Prepare its isolated scratch directory under `tmp/functions/`.
3. Record each hypothesis in the attempt directory and compile/diff it.
4. If matched, integrate only that function and verify the full ROM checksum.
5. Run `tools/decomp.py finalize ...`.
6. Commit the source plus note, or the failed-function note alone.
7. Continue immediately with the next queue row.

Committed source mirrors the original reference tree below `src/`. Multiple
matched functions from one original file live together in guarded blocks.
Generated selector shims under `build/src_functions/` compile one block at a
time, preserving the function-level linker layout and atomic workflow.
After the initial full Splat configure, function cycles use
`tools/fast_configure.py`. It links matched source objects between raw target
text gaps while reusing the fixed data/BSS objects, avoiding full
re-disassembly without weakening the ROM checksum gate.

The queue uses `SELF` in the `commit` column because a commit cannot contain
its own hash. The containing commit is found with `git log -- <notes_file>`.
