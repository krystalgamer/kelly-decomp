# _M_insert_aux__t6vector2ZP6signalZt12my_allocator1ZP6signalPP6signalRCP6signal

- Address: `0x0035ABC0`
- Size: `0x204` (516 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_vector.h`
- Reference source: ``
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 18.6047 | 6.2016 | `candidate.cpp` |

### Attempt 1 notes

Sole source-first attempt preserved in this packet. The candidate implements the GCC 2.95 vector insertion/reallocation control flow with minimal declarations for `signal`, `my_allocator`, and `vector`.

## Outcome

The exact released signal-pointer vector insertion body differed at 18.6047% byte score; no source variant was attempted.
