# optimize__8vr_pmesh

- Address: `0x002D6980`
- Size: `0x43C` (1084 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/pmesh.cpp`
- Reference source: `KS/SRC/pmesh.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 13.8693 | 1.4085 | `candidate.cpp` |
| 2 | different | 37.7306 | 16.2362 | `candidate.cpp` |
| 3 | different | 46.7831 | 23.8971 | `candidate.cpp` |

### Attempt 1 notes

Attempt 1 used the released `vr_pmesh::optimize` body from
`kelly-slaters-pro-surfer/KS/SRC/pmesh.cpp:2921-2984`, together with the
released face/reduced-face layout, visual-rep virtual hierarchy, custom
small-block vector allocator, and material-map clear/insert paths.

The candidate compiled to 1132 bytes and matched 157/1132 bytes and 4/284
instructions (13.8693% bytes, 1.4085% instructions). Its map insert result was
incorrectly treated as a POD register return, producing a large extra
post-call copy sequence.

### Attempt 2 notes

Attempt 2 preserved the released body and corrected the map insert result to
the non-POD `pair<iterator,bool>` ABI used by GCC 2. The hidden return object,
map `this`, and value pointer then matched the target call shape.

The candidate shrank to 1012 bytes and improved to 409/1084 matching bytes and
44/271 matching instructions (37.7306% bytes, 16.2362% instructions). The
remaining major difference was the local vector base destructor being emitted
as an out-of-line call instead of the target's inlined deallocation.

### Attempt 3 notes

Attempt 3 expressed the released vector base deallocation directly at function
exit and made the temporary container trivially destructible, reproducing the
target allocator/free-list tail without assembly.

The candidate reached 1088 bytes versus the 1084-byte target and matched
509/1088 bytes and 65/272 instructions (46.7831% bytes, 23.8971%
instructions). GCC retained one extra saved register in the isolated build;
the remaining differences are broad register allocation and scheduling drift.

## Outcome

The released pmesh optimization, custom allocator, material-map ABI, and vector deallocation path were reconstructed with shared pmesh declarations; the final 1088-byte candidate remained four bytes larger with broad isolated register-allocation drift after three attempts.
