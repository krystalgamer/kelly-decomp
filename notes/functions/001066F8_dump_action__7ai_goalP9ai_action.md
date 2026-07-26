# dump_action__7ai_goalP9ai_action

- Address: `0x001066F8`
- Size: `0xDC` (220 bytes)
- Object: `game/files_ai`
- Debug source: `C:/KS/SRC/ai_goals.cpp`
- Reference source: `KS/SRC/ai_goals.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 64.2857 | 30.3571 | `candidate.cpp` |
| 2 | different | 63.1818 | 27.2727 | `candidate.cpp` |
| 3 | different | 80.0 | 43.6364 | `candidate.cpp` |
| 4 | different | 23.7069 | 1.7241 | `candidate.cpp` |
| 5 | different | 23.7069 | 1.7241 | `candidate.cpp` |

### Attempt 1 notes

Attempt 1 used the exact released `ai_goal::dump_action(ai_action *)`
body, with source-order `ai_goal`, `ai_action`, list iterator, erase, and
allocator declarations reconstructed from the released headers and shared
old-STL prior art. It produced the correct 80-byte frame and virtual-call
layout, but simplified iterator/list types changed register allocation and
made the function 224 bytes instead of 220.

### Attempt 2 notes

Attempt 2 replaced the simplified list with the repository's shared
`stl_list_shared.h`-style iterator base and void-pointer node links. This
restored the target's allocator setup plus scheduling NOP and shortened the
function to 216 bytes, but the released GCC 2.95.2 iterator is a direct
one-field type rather than an inherited iterator base, so branch forms and
register choices still differed.

### Attempt 3 notes

Attempt 3 used the official GCC 2.95.2 direct `_List_iterator`, exact
released `erase` body, no-op pointer destruction, `_List_base`, and
`simple_alloc`/`my_allocator` free-list path. It reached the exact 220-byte
size and 80.0000% byte score. Remaining differences were register allocation:
the candidate hoisted the sentinel and reused `a0`, while the target retained
the goal pointer and reloaded `actions._M_node` on the mismatch path.

### Attempt 4 notes

Attempt 4 made the list sentinel field volatile to test the target's repeated
end-iterator loads. Volatility affected begin, erase, and end globally,
inflating the function to 232 bytes and collapsing the score. The useful
observation is narrower: only `end()` needs to inhibit sentinel hoisting.

### Attempt 5 notes

Attempt 5 restored the nonvolatile list field but made only `end()` read the
sentinel through a volatile lvalue, aiming to retain the goal pointer and
force the target's mismatch-path reload. GCC propagated that volatility into
temporary handling and emitted the same 232-byte shape as attempt 4. The
official direct-iterator candidate from attempt 3 remains best.

## Outcome

Deferred after five source-level attempts. The action dump reached the exact target size and 80% byte score, but string construction, stream calls, and branch scheduling remained different.
