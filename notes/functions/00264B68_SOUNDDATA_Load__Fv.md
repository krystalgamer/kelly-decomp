# SOUNDDATA_Load__Fv

- Address: `0x00264B68`
- Size: `0xFC` (252 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/sounddata.cpp`
- Reference source: `KS/SRC/ks/sounddata.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

# Attempt 1

- Queue was clean `pending` with zero attempts; no pre-existing address scratch was present.
- Used the released `SOUNDDATA_Load` body verbatim from `sounddata.cpp:208-234`.
- Added only the narrow released declarations required for `nglFileBuf`, file hooks, NSL source IDs, `EventType`, and `SoundScriptManager`.
- Result: **compile_failed** — the isolated candidate omitted the authentic `NULL` macro declaration used by the released body. Score 0.0; no object was emitted. No second attempt was made.

## Outcome

Exact released SOUNDDATA_Load source did not compile in isolation; preserved attempt 1 for the later Sol pass.
