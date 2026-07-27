# add_callback__6signalPQ213script_object8instanceP13vm_executablePcb

- Address: `0x0034C548`
- Size: `0x104` (260 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/signal.cpp`
- Reference source: `KS/SRC/signal.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 46.1538 | 20.0 | `candidate.cpp` |

### Attempt 1 notes

Released source-first candidate used only the callback, list allocator, and allocation ABI declarations needed for standalone compilation; the single test completed with a different result.

## Outcome

The exact released signal callback adder differed from the target; the sole attempt scored 46.1538%.
