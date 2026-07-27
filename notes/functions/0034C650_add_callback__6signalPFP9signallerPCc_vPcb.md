# add_callback__6signalPFP9signallerPCc_vPcb

- Address: `0x0034C650`
- Size: `0xF4` (244 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/signal.cpp`
- Reference source: `KS/SRC/signal.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 52.8689 | 27.8689 | `candidate.cpp` |
| 2 | different | 95.082 | 85.2459 | `candidate.cpp` |
| 3 | different | 95.082 | 85.2459 | `candidate.cpp` |
| 4 | different | 95.082 | 85.2459 | `candidate.cpp` |
| 5 | different | 80.7377 | 65.5738 | `candidate.cpp` |

### Attempt 1 notes

Exact released body with source-faithful callbacks and a first list implementation. List insertion used a different inlining shape and produced 228 bytes.

### Attempt 2 notes

Switched to the released-era iterator-base and node-construction structure. The candidate reached the exact 244-byte size and 95.082% byte identity; only three temporary stack slots were rotated.

### Attempt 3 notes

Used the direct SGI iterator representation from the released compiler era. EE GCC retained the same 244-byte temporary-slot mismatch as attempt 2.

### Attempt 4 notes

Introduced an explicit source-level callback value before push_back to influence temporary allocation. The compiler coalesced it and reproduced the attempt-2 schedule.

### Attempt 5 notes

Expanded the source-faithful list insertion with an explicitly laid-out 48-byte scratch object. This fixed the temporary stack slots but changed the node register and shortened the function to 232 bytes.

## Outcome

The released code-callback body and four source-faithful list insertion variants exhausted the attempt bound. The best 244-byte candidates reached 95.082% byte identity, with only three compiler-generated iterator temporary slots rotated; explicitly laying out those slots changed node register allocation and did not match.
