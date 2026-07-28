# register_item_lib__Fv

- Address: `0x00316728`
- Size: `0x14C` (332 bytes)
- Object: `game/files_script`
- Debug source: `C:/KS/SRC/script_lib_item.cpp`
- Reference source: `KS/SRC/script_lib_item.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 63.253 | 78.3133 | `candidate.cpp` |

### Attempt 1 notes

# Attempt 1 — exact released source

- FIRST PASS wave 36 A4 for `0x00316728 register_item_lib__Fv`.
- Tested the exact released `register_item_lib()` body once with minimal self-contained declarations preserving the released class inheritance, constructor calls, virtual overrides, allocation sizes, and `NEW` form.
- Result: **different** — 210/332 bytes (63.2530%) and 65/83 instructions (78.3133%); candidate and target sizes were both 332 bytes.
- No variants, diff chasing, build, finalization, integration, tracked writes, tool edits, subagents, commit, or push were attempted.
- Matched-only proposal fields are omitted.

## Citations

- `kelly-slaters-pro-surfer/KS/SRC/script_lib_item.cpp:492-513`
- `kelly-slaters-pro-surfer/KS/SRC/script_lib_item.h:16-24`
- `kelly-slaters-pro-surfer/KS/SRC/script_library_class.h:20-52,67-82`
- `tmp/functions/00316728_register_item_lib__Fv/attempt-1/result.json`

## Outcome

The exact released item-library registration differed from the target; the sole attempt scored 63.253%.
