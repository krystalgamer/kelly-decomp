# write_tree__5stashR7os_filePt8TreeNode1Z17stash_index_entryQ25stash15stash_section_t

- Address: `0x00347280`
- Size: `0x43C` (1084 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/mustash.cpp`
- Reference source: `KS/SRC/mustash.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 22.5092 | 14.8699 | `candidate.cpp` |
| 2 | different | 28.2847 | 16.7883 | `candidate.cpp` |
| 3 | different | 28.2847 | 16.7883 | `candidate.cpp` |

### Attempt 1 notes

Used the exact released `stash::write_tree` body from `kelly-slaters-pro-surfer/KS/SRC/mustash.cpp` with source-faithful `stash`, `os_file`, `TreeNode<stash_index_entry>`, `stash_index_entry`, and `pstring` declarations. The single permitted isolated test compiled but differed at 22.5092% bytes and 14.8699% instructions; no alternate body, declaration set, or ABI was attempted.

### Attempt 2 notes

Attempt 2 kept the exact released traversal and restored the shared
`pstring` default constructor, copy constructor, and four-chunk assignment
operator from `pstring.h`. The shared stash entry also gained the released
section and file-type enums plus inline validity/storage/offset helpers.

The candidate expanded from 604 to 1096 bytes and matched 310/1096 bytes and
46/274 instructions (28.2847% bytes, 16.7883% instructions). It was only 12
bytes larger than the target; the remaining drift is scheduling around the
zeroing and copy loops.

### Attempt 3 notes

Attempt 3 retained the released body and corrected all ten negative-low-half
pstring type aliases so the isolated `.equ` materialization uses the target
high halves.

The emitted function remained 1096 bytes with the same 28.2847% byte score and
16.7883% instruction score. The target schedules the node-data load after the
pstring zeroing loop and fills branch delay slots that the isolated build
leaves as five extra no-ops. No compiler barrier or artificial inline assembly
was added.

## Outcome

The released stash traversal reached 1096 bytes after restoring shared pstring construction/copy semantics and corrected target aliases; five scheduling no-ops kept it 12 bytes above the target after three attempts, without adding an artificial compiler barrier.
