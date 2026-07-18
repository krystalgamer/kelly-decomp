# Reload__7MapDataP9PanelQuad

- Address: `0x0018B5C0`
- Size: `0x8` (8 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/Map.cpp`
- Reference source: `KS/SRC/ks/Map.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The reload loop is excluded when `MAP_DASHES` is enabled, leaving an empty
method. The pointer-parameter signature matched immediately.

## Outcome

The MapData reload loop is excluded when MAP_DASHES is enabled, leaving an empty method. The first pointer-parameter candidate matched exactly and preserved the full ROM checksum.
