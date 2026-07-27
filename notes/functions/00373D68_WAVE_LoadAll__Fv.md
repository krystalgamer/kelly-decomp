# WAVE_LoadAll__Fv

- Address: `0x00373D68`
- Size: `0xF8` (248 bytes)
- Object: `game/files_wave`
- Debug source: `C:/KS/SRC/ks/wave.cpp`
- Reference source: `KS/SRC/ks/wave.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

# WAVE_LoadAll__Fv first pass

- Queue was clean and pending with zero attempts; no pre-existing address scratch existed.
- Candidate uses the exact released body. `wavewarn` is omitted only through its authentic disabled macro expansion.
- Narrow declarations preserve the released `u_int`, two-pointer `stringx` layout and converting constructor/destructor, schedule helper signature, counter, and static loader.
- Exactly one candidate is tested; no source iteration or diff chasing.

## Result

- **compile_failed**, score 0.0. The compiler rejected the static `WAVE_Load` declaration as used but never defined.
- No second attempt was made.

## Outcome

Exact released WAVE_LoadAll source did not compile in isolation; preserved attempt 1 for the later Sol pass.
