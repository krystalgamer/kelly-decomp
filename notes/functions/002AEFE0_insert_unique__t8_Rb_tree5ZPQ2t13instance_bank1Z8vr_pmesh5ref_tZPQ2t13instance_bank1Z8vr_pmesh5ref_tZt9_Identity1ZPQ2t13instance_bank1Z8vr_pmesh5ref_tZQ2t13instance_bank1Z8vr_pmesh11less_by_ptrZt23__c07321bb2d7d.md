# insert_unique__t8_Rb_tree5ZPQ2t13instance_bank1Z8vr_pmesh5ref_tZPQ2t13instance_bank1Z8vr_pmesh5ref_tZt9_Identity1ZPQ2t13instance_bank1Z8vr_pmesh5ref_tZQ2t13instance_bank1Z8vr_pmesh11less_by_ptrZt23__malloc_alloc_template1i0RCPQ2t13instance_bank1Z8vr_pmesh5ref_t

- Address: `0x002AEFE0`
- Size: `0x174` (372 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_tree.h`
- Reference source: ``
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 34.1398 | 4.4444 | `candidate.cpp` |

### Attempt 1 notes

# Attempt 1 — exact released/toolchain template

- FIRST PASS wave 57 lane B1 for `0x002AEFE0`.
- Tested the GCC 2.95.2 SGI `_Rb_tree::insert_unique` template body once with minimal declarations preserving the released node, iterator, `instance_bank<vr_pmesh>::ref_t`, pointer comparator, identity functor, and allocator types.
- Result: **different**, byte score **34.1398%** (127/372) and instruction score **4.4444%** (4/90); candidate size 368 bytes versus target size 372 bytes.
- Exactly one non-placeholder candidate was tested using `env/bin/python`.
- No variants, retries, diff chasing, build, finalization, integration, tracked-file/tool edits, subagents, lean work, commit, or push were performed.

## Citations

- `kelly-slaters-pro-surfer/KS/SRC/instance.h:11-50`
- `config/SLUS_203.34.symbol_addrs.txt`
- `tmp/functions/002AEFE0_insert_unique__t8_Rb_tree5ZPQ2t13instance_bank1Z8vr_pmesh5ref_tZPQ2t13instance_bank1Z8vr_pmesh5ref_c07321bb2d7d/attempt-1/result.json`

## Outcome

The exact released vr_pmesh instance-bank insertion differed from the target; the sole attempt scored 34.1398%.
