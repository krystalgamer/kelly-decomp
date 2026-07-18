# isOn__13rumbleManageri

- Address: `0x00241DD0`
- Size: `0x10` (16 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/rumbleManager.cpp`
- Reference source: `KS/SRC/ks/rumbleManager.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released method indexes the word-sized `on` array at offset `0xE4`.

## Outcome

The released `rumbleManager::isOn` indexed load matched exactly on the first attempt.
