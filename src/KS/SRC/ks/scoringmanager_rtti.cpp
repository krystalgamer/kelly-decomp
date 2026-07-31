// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_0026ED90)
// 0x0026ED90 Reset__Q214ScoringManager9CHAININFO
class ScoringManager { public: struct CHAININFO { int points; int facePoints; int airPoints; int tubePoints; int numTricks; bool multiLocation; void Reset(); }; };
void ScoringManager::CHAININFO::Reset() { points = 0; numTricks = 0; multiLocation = false; facePoints = 0; airPoints = 0; tubePoints = 0; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0026ED38)
// 0x0026ED38 __tf14ScoringManager
extern "C" void __rtti_class(
    void **type, const char *name, const void *bases, int count
);
extern "C" void **event_recipient_rtti()
    __asm__("__tf14EventRecipient");
extern "C" void *scoring_manager_type[]
    __asm__("__ti14ScoringManager");
extern "C" const char scoring_manager_name[];
extern "C" const char scoring_manager_bases[];

__asm__(".equ __rtti_class, 0x003CE2B0");
__asm__(".equ __tf14EventRecipient, 0x0035FE90");
__asm__(".equ __ti14ScoringManager, 0x005A3A60");
__asm__(".equ scoring_manager_name, 0x004E4D88");
__asm__(".equ scoring_manager_bases, 0x004E4DA0");

extern "C" void **scoring_manager_rtti()
    __asm__("__tf14ScoringManager");

void **scoring_manager_rtti()
{
    if (!scoring_manager_type[0])
    {
        event_recipient_rtti();
        __rtti_class(
            scoring_manager_type,
            scoring_manager_name,
            scoring_manager_bases,
            1
        );
    }
    return scoring_manager_type;
}
#endif
