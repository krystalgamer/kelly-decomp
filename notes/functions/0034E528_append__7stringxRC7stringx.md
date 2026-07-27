# append__7stringxRC7stringx

- Address: `0x0034E528`
- Size: `0x10C` (268 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/stringx.cpp`
- Reference source: `KS/SRC/stringx.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 20.1493 | 5.9701 | `candidate.cpp` |

### Attempt 1 notes

# First-pass notes

Used the exact released `stringx::append(const stringx &)` body from `KS/SRC/stringx.cpp:612-629` with only the minimal self-contained `stringx`/`string_buf` layouts, inline released helpers, external method declarations, and symbol bindings needed to compile it.

The single test compiled successfully but differed: 54/268 bytes and 4/67 instructions matched (byte score 20.1493; instruction score 5.9701). Per first-pass policy, no variants or diff chasing were attempted.

## Outcome

The exact released string append definition differed from the target; the sole attempt scored 20.1493%.
