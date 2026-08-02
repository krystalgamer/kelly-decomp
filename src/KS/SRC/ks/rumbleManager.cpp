// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_002427C8)
// 0x002427C8 writeText__FiPc
extern "C" int sceWrite(int fd, const char *buffer, int count);
extern "C" int strlen(const char *text);
__asm__(".globl sceWrite\n.equ sceWrite, 0x003DF228");
__asm__(".globl strlen\n.equ strlen, 0x003D40E0");

int writeText(const int fd, char *text) {
    int len = strlen(text);
    return sceWrite(fd, text, len);
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00241B18)
// 0x00241B18 __13rumbleManager
typedef int WaveRegionEnum;

#define RUMBLE_PADS 4

class rumbleManager
{
public:
  typedef enum {
    LANDING = 0,
    IN_AIR,
    WIPING_OUT,
    UNDERWATER,
    GRINDING_OBJECT,
    FLOATER,
    IN_WASH,
    LIE_ON_BOARD_POCKET,
    LIE_ON_BOARD_FACE,
    LIE_ON_BOARD_CHIN,
    STANDING_NEAR_TUBE,
    RUMBLE_NONE,
    RUMBLE_STATE_END
  } RumbleState;

  RumbleState currentRumbleState[2];
  RumbleState lastRumbleState[2];
  bool drawState;

  float rumbleLevels[RUMBLE_STATE_END];
  float rumbleVarPeriods[RUMBLE_STATE_END];
  float rumbleVarAmplitudes[RUMBLE_STATE_END];
  float rumbleFreqs[RUMBLE_STATE_END];

  rumbleManager();
private:
  float variancePeriod;
  float varianceAmplitude;

  float currentStateTime[2];
  bool on[RUMBLE_PADS];
  bool paused;
  float rumbleLevel, rumbleFreq;
  int ks_state[2], ks_laststate[2];
  WaveRegionEnum currentRegion[2], lastRegion[2];
};

rumbleManager::rumbleManager()
{
  rumbleLevel = 0;
  paused = false;
  on[0] = on[1] = on[2] = on[3] = true;
  currentStateTime[0] = currentStateTime[1] = 0;
  rumbleLevels[LANDING]             = 0.8f;
  rumbleLevels[IN_AIR]              = 0.0f;
  rumbleLevels[WIPING_OUT]          = 1.0f;
  rumbleLevels[UNDERWATER]          = 0.2f;
  rumbleLevels[GRINDING_OBJECT]     = 1.0f;
  rumbleLevels[FLOATER]             = 0.3f;
  rumbleLevels[IN_WASH]             = 0.4f;
  rumbleLevels[LIE_ON_BOARD_POCKET] = 0.25f;
  rumbleLevels[LIE_ON_BOARD_FACE]   = 0.3f;
  rumbleLevels[LIE_ON_BOARD_CHIN]   = 0.6f;
  rumbleLevels[STANDING_NEAR_TUBE]  = 0.5f;
  rumbleLevels[RUMBLE_NONE]         = 0.0f;

  rumbleVarPeriods[LANDING]             = 0.0f;
  rumbleVarPeriods[IN_AIR]              = 0.0f;
  rumbleVarPeriods[WIPING_OUT]          = 0.0f;
  rumbleVarPeriods[UNDERWATER]          = 1.0f;
  rumbleVarPeriods[GRINDING_OBJECT]     = 0.0f;
  rumbleVarPeriods[FLOATER]             = 1.5f;
  rumbleVarPeriods[IN_WASH]              = 0.5f;
  rumbleVarPeriods[LIE_ON_BOARD_POCKET] = 2.0f;
  rumbleVarPeriods[LIE_ON_BOARD_FACE]   = 3.0f;
  rumbleVarPeriods[LIE_ON_BOARD_CHIN]   = 2.0f;
  rumbleVarPeriods[STANDING_NEAR_TUBE]  = 2.5f;
  rumbleVarPeriods[RUMBLE_NONE]         = 0.0f;

  rumbleVarAmplitudes[LANDING]             = 0.0f;
  rumbleVarAmplitudes[IN_AIR]              = 0.0f;
  rumbleVarAmplitudes[WIPING_OUT]          = 0.0f;
  rumbleVarAmplitudes[UNDERWATER]          = 0.2f;
  rumbleVarAmplitudes[GRINDING_OBJECT]     = 0.0f;
  rumbleVarAmplitudes[FLOATER]             = 0.1f;
  rumbleVarAmplitudes[IN_WASH]             = 0.2f;
  rumbleVarAmplitudes[LIE_ON_BOARD_POCKET] = 0.1f;
  rumbleVarAmplitudes[LIE_ON_BOARD_FACE]   = 0.1f;
  rumbleVarAmplitudes[LIE_ON_BOARD_CHIN]   = 0.1f;
  rumbleVarAmplitudes[STANDING_NEAR_TUBE]  = 0.2f;
  rumbleVarAmplitudes[RUMBLE_NONE]         = 0.0f;

  rumbleFreqs[LANDING]             = 2.0f;
  rumbleFreqs[IN_AIR]              = 0.0f;
  rumbleFreqs[WIPING_OUT]          = 2.0f;
  rumbleFreqs[UNDERWATER]          = 0.0f;
  rumbleFreqs[GRINDING_OBJECT]     = 1.0f;
  rumbleFreqs[FLOATER]             = 0.0f;
  rumbleFreqs[IN_WASH]             = 0.0f;
  rumbleFreqs[LIE_ON_BOARD_POCKET] = 0.0f;
  rumbleFreqs[LIE_ON_BOARD_FACE]   = 0.0f;
  rumbleFreqs[LIE_ON_BOARD_CHIN]   = 0.0f;
  rumbleFreqs[STANDING_NEAR_TUBE]  = 0.0f;
  rumbleFreqs[RUMBLE_NONE]         = 0.0f;


};
#endif
