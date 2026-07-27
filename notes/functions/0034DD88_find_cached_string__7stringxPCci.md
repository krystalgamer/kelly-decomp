# find_cached_string__7stringxPCci

- Address: `0x0034DD88`
- Size: `0x12C` (300 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/stringx.cpp`
- Reference source: `KS/SRC/stringx.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 63.7821 | 43.5897 | `candidate.cpp` |

### Attempt 1 notes

FIRST PASS lane B4. Tested the exact released `stringx::find_cached_string` definition once with minimal self-contained declarations for `string_buf`, its inlined reference/equality helpers, and the static cache. The candidate compiled and emitted the requested symbol but differed: 199/312 compared bytes (63.7821%) and 34/78 instructions (43.5897%); candidate size 312 versus target size 300. Per first-pass policy, no variants, diff chasing, build, integration, finalization, queue edits, or source/prefix/shared proposal were attempted.

## Outcome

The exact released cached-string lookup differed from the target; the sole attempt scored 63.7821%.
