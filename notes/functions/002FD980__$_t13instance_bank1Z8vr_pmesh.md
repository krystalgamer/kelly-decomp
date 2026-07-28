# _$_t13instance_bank1Z8vr_pmesh

- Address: `0x002FD980`
- Size: `0x1B4` (436 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/instance.h`
- Reference source: `KS/SRC/instance.h`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | symbol_missing | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

# FIRST PASS wave 78 lane B2 — 0x002FD980

- Status: **symbol_missing**
- Canonical attempts: **1**
- Harness invocations: **1**
- Byte score: **0.0000%**
- Instruction score: **0.0000%**
- Candidate: `tmp/functions/002FD980__$_t13instance_bank1Z8vr_pmesh/attempt-1/candidate.cpp`
- SHA-1: `c39fd2566a44f4026b580e27e5127bc13e442332`
- Candidate/target function size: unavailable/436 bytes (candidate symbol missing)
- Candidate source size: 2163 bytes
- Started: `2026-07-28T18:22:57.301999Z`
- Completed: `2026-07-28T18:28:26.336437Z`
- Duration: **329.034299s**

The exact released `instance_bank<T>::~instance_bank` body was represented once with self-contained faithful bank, set, iterator, node, ref, and string declarations. The compiler emitted `_$_13instance_bank` rather than the requested template-instantiation symbol, so the harness honestly reported `symbol_missing`: `Candidate did not emit _$_t13instance_bank1Z8vr_pmesh; emitted functions: ['_$_13instance_bank', '_$_5ref_t', '_$_t7ref_set1PFPvP4node_v11erase_label', '_$_t7ref_set1PFPvP4node_v9erase_ptr']`

No retry, alternate, assembly implementation, matching annotation, variants, post-test diff chasing, attempts 2-5, finalization, integration, build, tracked-file edit, or git mutation was performed.

## Released citations

- `kelly-slaters-pro-surfer/KS/SRC/instance.h:13-89,93-110`
- `kelly-slaters-pro-surfer/KS/SRC/pmesh.cpp:198`
- `config/SLUS_203.34.symbol_addrs.txt:5204`
- `asm/cod/text_1FD0B4.s:695-814`
- `tmp/functions/002FD980__$_t13instance_bank1Z8vr_pmesh/metadata.json`
- `tmp/functions/002FD980__$_t13instance_bank1Z8vr_pmesh/target.s`
- `tmp/functions/002FD980__$_t13instance_bank1Z8vr_pmesh/attempt-1/result.json`

## Outcome

The exact released pmesh instance-bank destructor candidate compiled without emitting the target symbol; no source variant was attempted.
