#ifndef KELLY_DECOMP_DEMO_MODE_SHARED_H
#define KELLY_DECOMP_DEMO_MODE_SHARED_H

struct DemoReplayFile {
    unsigned char *Buf;
    unsigned int Size;
    unsigned int UserData;
};

class DemoModeManager {
private:
    float totalTime;
    float timeoutDelay;
    float demoDuration;
    float demoTime;
    bool inDemo;
    bool played;
    bool demoStarted;
    char fname[24];
    bool wasInTitle;

public:
    unsigned int replayFrames;
    unsigned int replayMainPOFrames;
    unsigned int replayAIPOFrames;

private:
    // The shipped source version retains 0x20 bytes before replayFile.
    char replay_layout_context[0x20];

public:
    DemoReplayFile replayFile;

private:
    char post_replay_context[0x18];

public:
    bool wasInDemo;

    DemoModeManager();
    bool inDemoMode();
    bool ReturnFromDemoToTitle();
    bool ReturnFromDemoToMain();
    void ExitToFrontEnd();
};

#endif
