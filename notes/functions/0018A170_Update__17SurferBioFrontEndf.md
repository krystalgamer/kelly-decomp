# Update__17SurferBioFrontEndf

- Address: `0x0018A170`
- Size: `0x198` (408 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/SurferFrontEnd.cpp`
- Reference source: `KS/SRC/ks/SurferFrontEnd.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

Attempt 1 used the exact released `SurferBioFrontEnd::Update` body from
`kelly-slaters-pro-surfer/KS/SRC/ks/SurferFrontEnd.cpp:1136-1151`, with
minimal declarations derived from
`kelly-slaters-pro-surfer/KS/SRC/ks/SurferFrontEnd.h:140-186`.

The isolated test returned `compile_failed` because the local declaration
thunk emitted `scroll__13PreformatTextbi` and the absolute symbol declaration
defined the same symbol. Per the first-pass constraint, no second candidate
or test was attempted.

## Outcome

The exact released surfer biography update failed to compile in the isolated bench; no source variant was attempted.
