# frame_advance__6widgetf

- Address: `0x0033DF70`
- Size: `0x1B8` (440 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/widget.cpp`
- Reference source: `KS/SRC/widget.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 27.5 | 3.6364 | `candidate.cpp` |

### Attempt 1 notes

# Attempt 1

One-shot released-source FIRST PASS. The candidate preserves the released `widget::frame_advance` body unchanged and supplies only self-contained ABI/list/widget/wevent declarations without project headers.

Result: **different**, score **27.5%** (121/440 matching bytes; 4/110 matching instructions, instruction score 3.6364%). Emitted function size was 428 bytes versus the 440-byte target. No retry, variant, alternate logic, manual assembly, matching annotation, or post-test diff chase was performed.

Citations: released body `kelly-slaters-pro-surfer/KS/SRC/widget.cpp:331-386`; released declarations/layout `kelly-slaters-pro-surfer/KS/SRC/widget.h:24-40,173-260,353-360`; queue metadata `notes/function_queue.csv` row `0x0033DF70`; symbol metadata `config/SLUS_203.34.symbol_addrs.txt` entry `frame_advance__6widgetf`; prepared metadata `tmp/functions/0033DF70_frame_advance__6widgetf/metadata.json`; target assembly `tmp/functions/0033DF70_frame_advance__6widgetf/target.s`.

## Outcome

The exact released widget frame-advance body differed at 27.5000% byte score; no source variant was attempted.
