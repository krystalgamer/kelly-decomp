# set_async_read_size__5stashiUi

- Address: `0x00346ED0`
- Size: `0x1C` (28 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/mustash.cpp`
- Reference source: `KS/SRC/mustash.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 78.5714 | 71.4286 | `candidate.cpp` |
| 2 | different | 89.2857 | 71.4286 | `candidate.cpp` |
| 3 | different | 67.8571 | 57.1429 | `candidate.cpp` |
| 4 | different | 60.7143 | 42.8571 | `candidate.cpp` |
| 5 | different | 42.8571 | 42.8571 | `candidate.cpp` |

### Attempt 1 notes

The field layout was correct, but the absolute alias used the source-level static member name instead of EE GCC\x27s emitted `_5stash$substash` symbol, leaving unresolved relocation words.

### Attempt 2 notes

Resolving the static member fixed the absolute address, but EE GCC formed the indexed entry in v0 instead of destructively updating the stash-id register a0.

### Attempt 3 notes

Tying only the indexed offset to a0 fixed the final address/store sequence but reused v0 for the stride, moving the static-base load after multiplication.

### Attempt 4 notes

Constraining stride/base/offset fixed the initial registers, but GCC completed the static address before multiplication and still formed the final entry in v0.

### Attempt 5 notes

The split-page fifth candidate preserved the first three instructions, but GCC folded the negative low half into the final store offset and shortened the function to 24 bytes; the five-attempt limit is exhausted.

## Outcome

Five faithful indexed-array source shapes could not reproduce the target absolute-address/register schedule; best byte score was 89.2857%.
