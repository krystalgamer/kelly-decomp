# link__11ai_polypath

- Address: `0x0010B980`
- Size: `0x110` (272 bytes)
- Object: `game/files_ai`
- Debug source: `C:/KS/SRC/ai_polypath.cpp`
- Reference source: `KS/SRC/ai_polypath.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 23.6301 | 4.1096 | `candidate.cpp` |

### Attempt 1 notes

# Attempt 1 — exact released source

- Copied the released `ai_polypath::link` body exactly.
- Added only self-contained declarations required by the body: the three-pointer `vector` representation, `ai_polypath::cells`, `ai_polypath_cell` side enum, vertex/link accessors, link setter, and `request_link` declaration.
- Ran `function_test` exactly once. Result: `different`, byte score 23.6301% (69/292), instruction score 4.1096% (3/73), candidate size 292 versus target size 272 bytes.
- No variants, disassembly comparison, or diff chasing were performed. Because the attempt did not match, no source, prefix, or shared-declaration proposal is made.

## Citations

- `kelly-slaters-pro-surfer/KS/SRC/ai_polypath.cpp:345-379` — exact released function body.
- `kelly-slaters-pro-surfer/KS/SRC/ai_polypath.h:17-55` — released `ai_polypath` declaration and `CELL_ARRAY` member.
- `kelly-slaters-pro-surfer/KS/SRC/ai_polypath_cell.h:392-396,427-440` — exact called method declarations and inline bodies.
- `tmp/functions/0010B980_link__11ai_polypath/attempt-1/result.json` — sole test result.

## Outcome

The exact released AI polypath link definition differed from the target; the sole attempt scored 23.6301%.
