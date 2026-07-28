# write_level_cache_tree__12file_managerR7os_fileT1Pt8TreeNode1Z14file_info_node

- Address: `0x0030DD38`
- Size: `0x160` (352 bytes)
- Object: `game/files_misfits`
- Debug source: `C:/KS/SRC/file_manager.cpp`
- Reference source: `KS/SRC/File_manager.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 28.7634 | 17.2043 | `candidate.cpp` |

### Attempt 1 notes

# Attempt 1 — exact released source/minimal declarations

- FIRST PASS wave 48 lane A1 for `0x0030DD38 write_level_cache_tree__12file_managerR7os_fileT1Pt8TreeNode1Z14file_info_node`.
- Tested the exact released `file_manager::write_level_cache_tree` body once with minimal self-contained declarations for `file_manager`, `os_file`, `stringx`, `pstring`, `file_info_node`, and `TreeNode`.
- Result: **different**, byte score **28.7634%** (107/372) and instruction score **17.2043%** (16/93); candidate size 372 bytes versus target size 352 bytes.
- Exactly one non-placeholder candidate was tested using `env/bin/python`.
- No variants, retries, diff chasing, build, finalization, integration, tracked-file/tool edits, subagents, lean work, commit, or push were performed.

## Citations

- `kelly-slaters-pro-surfer/KS/SRC/File_manager.cpp:379-408`
- `kelly-slaters-pro-surfer/KS/SRC/file_manager.h:14-116,153-243`
- `kelly-slaters-pro-surfer/KS/SRC/avltree.h:20-59`
- `tmp/functions/0030DD38_write_level_cache_tree__12file_managerR7os_fileT1Pt8TreeNode1Z14file_info_node/attempt-1/result.json`

## Outcome

The exact released level-cache tree writer differed from the target; the sole attempt scored 28.7634%.
