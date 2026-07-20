# __15trigger_manager

- Address: `0x00313AA8`
- Size: `0x30` (48 bytes)
- Object: `game/files_misfits`
- Debug source: `C:/KS/SRC/trigger.h`
- Reference source: `KS/SRC/trigger.h`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 45.8333 | 50.0 | `candidate.cpp` |
| 2 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 3 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 4 | different | 56.25 | 16.6667 | `candidate.cpp` |
| 5 | different | 76.9231 | 69.2308 | `candidate.cpp` |

### Attempt 1 notes

The native singleton/vector constructor recovered all field initializations but
omitted the target's otherwise empty 16-byte frame, producing 40 bytes.

### Attempt 2 notes

Adding an alloca-based frame while aliasing the old-GCC vtable failed because
the isolated unit also emitted `_vt$15trigger_manager`.

### Attempt 3 notes

Leaving the base destructor external still caused old GCC to define the same
vtable symbol, so the recovered alias remained a duplicate.

### Attempt 4 notes

A symbol-preserving explicit constructor reproduced the 48-byte size and stack
decrement but swapped the target vtable/member registers and placed the stack
restore before `jr`.

### Attempt 5 notes

Fixed `$v0/$v1` temporaries recovered nine target instructions, but the
constructor expanded to 52 bytes and still could not reproduce the return-delay
stack restore. Best byte score: 76.9231%.

## Outcome

Five constructor shapes could not reproduce the target empty frame, working-register assignment, and return-delay stack restore; best byte score was 76.9231%.
