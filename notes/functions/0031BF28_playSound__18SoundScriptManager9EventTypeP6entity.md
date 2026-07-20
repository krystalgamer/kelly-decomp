# playSound__18SoundScriptManager9EventTypeP6entity

- Address: `0x0031BF28`
- Size: `0x28` (40 bytes)
- Object: `game/files_script`
- Debug source: `ks/SoundScript.cpp`
- Reference source: `KS/SRC/ks/SoundScript.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | symbol_missing | 0.0 | 0 | `candidate.cpp` |
| 2 | different | 85.0 | 80.0 | `candidate.cpp` |
| 3 | different | 25.0 | 18.1818 | `candidate.cpp` |
| 4 | different | 85.0 | 80.0 | `candidate.cpp` |
| 5 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The first candidate used `int` for `EventType`, so the emitted symbol did not preserve the released enum type in its mangling.

### Attempt 2 notes

The enum fixed the symbol, but EE GCC formed the selected map address before moving the entity argument; the target schedules the argument move first and the address add in the call delay slot.

### Attempt 3 notes

Binding the entity argument directly to a1 before consuming the EventType forced an extra type-register copy and expanded the function to 44 bytes.

### Attempt 4 notes

Computing the byte offset first restored the target size but still let EE GCC form the map address before moving the entity argument.

### Attempt 5 notes

A minimal layout places the 0x80-byte event-map array at offset four and forwards the selected event to `playEvent`. A matching-only register constraint emits no instruction and preserves the target argument/address delay-slot schedule.

`KELLY_DECOMP_COMPILER_BARRIER()` is a matching-only annotation that emits no target instruction. It prevents EE GCC from applying the sibling/tail-call or scheduling transformation described above.

## Outcome

The released `SoundScriptManager::playSound` implementation matched exactly.
