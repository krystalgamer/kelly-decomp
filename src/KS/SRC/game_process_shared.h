#ifndef KELLY_DECOMP_GAME_PROCESS_SHARED_H
#define KELLY_DECOMP_GAME_PROCESS_SHARED_H

class game_process {
    const char *name;
    const int *flow;
    int index;
    int num_states;
    float timer;
    bool allow_override;

public:
    game_process();
    game_process(
        const char *process_name,
        const int *state_flow,
        int state_count);
    ~game_process();
};

#endif
