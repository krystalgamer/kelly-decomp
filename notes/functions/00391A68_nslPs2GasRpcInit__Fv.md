# nslPs2GasRpcInit__Fv

- Address: `0x00391A68`
- Size: `0x58` (88 bytes)
- Object: `nsl/gas_utility`
- Debug source: `C:/NSL/PS2/gas_utility.cpp`
- Reference source: `NSL/PS2/gas_utility.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 61.9565 | 52.1739 | `candidate.cpp` |
| 2 | different | 61.9565 | 52.1739 | `candidate.cpp` |
| 3 | different | 61.9565 | 52.1739 | `candidate.cpp` |
| 4 | different | 61.9565 | 52.1739 | `candidate.cpp` |
| 5 | different | 61.9565 | 52.1739 | `candidate.cpp` |

### Attempt 1 notes

Used the exact released GAS RPC initialization loop, client serve offset/global, device ID, and SIF helpers. The compiler inverted the bind-result branch into a branch-likely success path and grew to 92 bytes.

### Attempt 2 notes

Made failure/success result labels explicit. Code generation remained unchanged.

### Attempt 3 notes

Constrained the result to v0 at the common return. The same branch layout remained.

### Attempt 4 notes

Named the bind status before testing it. The compiler retained the same 92-byte form.

### Attempt 5 notes

Restored direct returns with an equivalent for(;;) loop. The legacy compiler continued selecting the alternate branch-likely layout.

## Outcome

Released nslPs2GasRpcInit remained blocked by an equivalent bind-result branch-likely layout after five source-level attempts.
