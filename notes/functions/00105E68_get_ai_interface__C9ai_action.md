# get_ai_interface__C9ai_action

- Address: `0x00105E68`
- Size: `0xC` (12 bytes)
- Object: `game/files_ai`
- Debug source: `C:/KS/SRC/ai_actions.cpp`
- Reference source: `KS/SRC/ai_actions.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released method forwards through `owner`; its inline owner accessor loads the interface pointer at offset `0x0`.

## Outcome

The released `ai_action::get_ai_interface` forwarding accessor matched exactly on the first attempt.
