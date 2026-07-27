# Decompilation bookkeeping

`function_queue.csv` is the durable work queue. Eligible functions are
ordered by `size_bytes`, then address.

## Statuses

- `pending`: eligible and not attempted
- `source_pending`: exact released source was attempted once; later Sol work
  may continue with attempts two through five after the first pass completes
- `sol_pending`: legacy three-attempt handoff awaiting Sol attempts four and
  five after the first pass completes
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
3. Compile/diff the exact released body and declarations as attempt one.
4. If matched, integrate only that function and verify the full ROM checksum.
5. Otherwise finalize a durable `source_pending` handoff and continue.
6. Commit the source plus note, or the handoff note alone.
7. Continue immediately with the next queue row.

When no `pending` rows remain, Sol resumes `source_pending` and legacy
`sol_pending` handoffs. The combined history remains capped at five distinct
source candidates before a final deferral.

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
