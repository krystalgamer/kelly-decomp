# _$_14signal_manager

- Address: `0x0035FD18`
- Size: `0xFC` (252 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/signals.h`
- Reference source: `KS/SRC/signals.h`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

# Attempt 1

- Queue row was `pending` with zero attempts; no address scratch existed before preparation.
- Used the released implicit `signal_manager` destructor shape from `signals.h`, with the authentic singleton base, `map<stringx, unsigned short>`, `vector<signal *>`, allocator/free-list behavior, tree erase helper, and deleting-destructor ABI.
- Result: **compile_failed** — score 0.0. The old compiler rejected the layout member declaration `signal_id_map signal_id_map` because the member name conflicted with the local type name.
- Exactly one candidate was tested; no second attempt or diff chasing was performed. Queue and tracked files were left untouched.

## Outcome

Exact released signal_manager destructor source did not compile in isolation; preserved attempt 1 for the later Sol pass.
