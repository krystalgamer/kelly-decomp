struct AudioDec { char padding_to_limit[0x48]; int limit; char padding_to_value[0x8]; int value; };
static int audioDecIsPreset(AudioDec* decoder) { return decoder->value >= decoder->limit; }
__asm__(".globl audioDecIsPreset__FP8AudioDec");
