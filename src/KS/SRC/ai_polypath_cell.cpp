// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_00113250)
// 0x00113250 _GLOBAL_$I$get_axis_count__C18AISurferController
extern "C" void StaticInit(int initialize, int priority) __asm__("__static_initialization_and_destruction_0");
extern "C" void GlobalInit() __asm__("_GLOBAL_$I$get_axis_count__C18AISurferController");
__asm__(".equ __static_initialization_and_destruction_0, 0x00112510");
void GlobalInit() { StaticInit(1, 65535); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_00113270)
// 0x00113270 _GLOBAL_$D$get_axis_count__C18AISurferController
extern "C" void StaticInit(int initialize, int priority) __asm__("__static_initialization_and_destruction_0");
extern "C" void GlobalDestroy() __asm__("_GLOBAL_$D$get_axis_count__C18AISurferController");
__asm__(".equ __static_initialization_and_destruction_0, 0x00112510");
void GlobalDestroy() { StaticInit(0, 65535); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0010D258)
// 0x0010D258 compute_heuristic__16ai_polypath_cellRC8vector3d
struct vector3d{float x,y,z;};template<class T>inline const T&maxv(const T&a,const T&b){return a<b?b:a;}class ai_polypath_cell{char pad0[64];vector3d m_CenterPoint;char pad1[108];float m_Heuristic;public:void compute_heuristic(const vector3d&goal)__asm__("compute_heuristic__16ai_polypath_cellRC8vector3d");};void ai_polypath_cell::compute_heuristic(const vector3d&goal){float XDelta=__builtin_fabsf(goal.x-m_CenterPoint.x);float YDelta=__builtin_fabsf(goal.y-m_CenterPoint.y);float ZDelta=__builtin_fabsf(goal.z-m_CenterPoint.z);m_Heuristic=maxv(maxv(XDelta,YDelta),ZDelta);}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0010C110)
// 0x0010C110 init__16ai_polypath_cellRC8vector3dN21
struct vector3d{float x,y,z;vector3d&operator=(const vector3d&o){x=o.x;y=o.y;z=o.z;return*this;}};class ai_polypath_cell{char plane[28];vector3d vertex[3];char pad0[100];ai_polypath_cell*link[3];char pad1[68];char sector_valid;public:void compute_cell_data();void init(const vector3d&,const vector3d&,const vector3d&)__asm__("init__16ai_polypath_cellRC8vector3dN21");};__asm__(".equ compute_cell_data__16ai_polypath_cell,0x0010C198");void ai_polypath_cell::init(const vector3d&a,const vector3d&b,const vector3d&c){vertex[0]=a;vertex[1]=b;vertex[2]=c;link[0]=0;link[1]=0;link[2]=0;compute_cell_data();sector_valid=0;}
#endif
