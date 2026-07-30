# Decompilation bookkeeping

`function_queue.csv` is the durable work queue. Eligible functions are
ordered by `size_bytes`, then address.

## Statuses

- `pending`: eligible and not attempted
- `source_pending`: exact released source was attempted once; Sol may continue
  with attempts two and three
- `sol_pending`: legacy exhausted three-attempt handoff awaiting final
  deferral under the current workflow
- `matched`: integrated source passed the isolated bench and full ROM checksum
- `deferred`: three candidates were attempted without a match; historical
  five-attempt rows remain valid
- `excluded_handwritten`: known handwritten PS2/VU assembly
- `excluded_sdk_runtime`: Sony SDK, compiler runtime, or standard library code
- `excluded_third_party`: third-party library code outside game/engine scope
- `excluded_unmapped`: no reliable game/engine source ownership

## Attempt definition

An attempt is one distinct candidate source submitted to
`tools/function_test.py test`. Re-testing an identical source hash does not
consume an attempt. Compiler/build infrastructure failures are fixed before
continuing and are not disguised as successful candidates.

New work may not exceed three distinct candidates. Historical matched and
deferred rows retain their existing attempt histories.

## Atomic function cycle

1. `tools/decomp.py next` selects the smallest pending function.
2. Prepare its isolated scratch directory under `tmp/functions/`.
3. Compile/diff the exact released body and declarations as attempt one.
4. If matched, integrate only that function and verify the full ROM checksum.
5. Otherwise use the target diff and released declarations for at most two
   additional Sol attempts.
6. Commit the matched source plus note, or defer the exhausted function with
   a notes-only commit.
7. Use `source_pending` only when work must stop after attempt one; resume it
   without waiting for all untouched functions.

Committed source mirrors the original reference tree below `src/`. Multiple
matched functions from one original file live together in guarded blocks.
Generated selector shims under `build/src_functions/` compile one block at a
time, preserving the function-level linker layout and atomic workflow.
Matching-only compiler annotations are defined and governed by
`notes/matching_annotations.md`; they are not treated as recovered source.
After the initial full Splat configure, function cycles use
`tools/fast_configure.py`. It links matched source objects between raw target
text gaps while reusing the fixed data/BSS objects, avoiding full
re-disassembly without weakening the ROM checksum gate.
`configure.py` selects this incremental path when bootstrap outputs exist;
use `configure.py --full` (or `--clean`) to force Splat regeneration.

The queue uses `SELF` in the `commit` column because a commit cannot contain
its own hash. The containing commit is found with `git log -- <notes_file>`.
