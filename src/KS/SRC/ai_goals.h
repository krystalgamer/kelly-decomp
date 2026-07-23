// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_00112F90)
// 0x00112F90 __tf7ai_goal
extern "C" void __rtti_user(void *info, const char *name); asm(".equ __rtti_user, 0x003CE2F8");
extern unsigned int typeinfo[] __asm__("typeinfo"); extern const char type_name[] __asm__("type_name");
asm(".equ typeinfo, 0x00511FA0"); asm(".equ type_name, 0x004C8818");
extern "C" void *GetTypeInfo() __asm__("__tf7ai_goal");
void *GetTypeInfo() { if (!typeinfo[0]) __rtti_user(typeinfo, type_name); return typeinfo; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00112FD8)
// 0x00112FD8 compare__7ai_goalPCvT1
class ai_goal
{
    int field0;
    float priority;
    float priority_modifier;

public:
    float get_priority() const
    {
        return priority * priority_modifier;
    }

    static int compare(const void *first, const void *second);
};

int ai_goal::compare(const void *first, const void *second)
{
    float diff =
        (*((ai_goal **)first))->get_priority() -
        (*((ai_goal **)second))->get_priority();
    register int result __asm__("$2");
    if (diff < 0.0f)
    {
        result = 1;
        goto done;
    }
    if (diff > 0.0f)
    {
        result = -1;
        goto done;
    }
    result = 0;
    return result;

done:
    __asm__ __volatile__("" : "+r"(result));
    return result;
}
#endif
