// Matching decompilation blocks selected by generated build shims.


// 0x00113250 _GLOBAL_$I$get_axis_count__C18AISurferController
extern "C" void StaticInit(int initialize, int priority) __asm__("__static_initialization_and_destruction_0");
extern "C" void GlobalInit() __asm__("_GLOBAL_$I$get_axis_count__C18AISurferController");
__asm__(".equ __static_initialization_and_destruction_0, 0x00112510");
void GlobalInit() { StaticInit(1, 65535); KELLY_DECOMP_COMPILER_BARRIER(); }

// 0x00113270 _GLOBAL_$D$get_axis_count__C18AISurferController
extern "C" void StaticInit(int initialize, int priority) __asm__("__static_initialization_and_destruction_0");
extern "C" void GlobalDestroy() __asm__("_GLOBAL_$D$get_axis_count__C18AISurferController");
__asm__(".equ __static_initialization_and_destruction_0, 0x00112510");
void GlobalDestroy() { StaticInit(0, 65535); KELLY_DECOMP_COMPILER_BARRIER(); }

// 0x0010D258 compute_heuristic__16ai_polypath_cellRC8vector3d
#include "KS/SRC/ai_polypath_cell.h"
template<class T>inline const T&maxv(const T&a,const T&b){return a<b?b:a;}void ai_polypath_cell::compute_heuristic(const vector3d&goal){float XDelta=__builtin_fabsf(goal.x-m_CenterPoint.x);float YDelta=__builtin_fabsf(goal.y-m_CenterPoint.y);float ZDelta=__builtin_fabsf(goal.z-m_CenterPoint.z);m_Heuristic=maxv(maxv(XDelta,YDelta),ZDelta);}

// 0x0010C110 init__16ai_polypath_cellRC8vector3dN21
#include "KS/SRC/ai_polypath_cell.h"
__asm__(".equ compute_cell_data__16ai_polypath_cell,0x0010C198");void ai_polypath_cell::init(const vector3d&a,const vector3d&b,const vector3d&c){m_Vertex[0]=a;m_Vertex[1]=b;m_Vertex[2]=c;m_Link[0]=0;m_Link[1]=0;m_Link[2]=0;compute_cell_data();sector_valid=0;}

// 0x0010CF60 process_cell__16ai_polypath_cellP16ai_polypath_heap
#include "KS/SRC/ai_polypath_cell.h"

__asm__(
    ".equ query_for_path__16ai_polypath_cellP16ai_polypath_heap"
    "P16ai_polypath_cellf, 0x0010D018"
);

bool ai_polypath_cell::process_cell(ai_polypath_heap* heap)
{
	if (m_SessionID == heap->session_id())
	{
		// once we have been processed, we are closed
		m_Open  = false;

		// querry all our neigbors to see if they need to be added to the Open heap
		for (int i=0;i<3;++i)
		{
			if (m_Link[i])
			{
				// abs(i-m_ArrivalWall) is a formula to determine which distance measurement to use.
				// The Distance measurements between the wall midpoints of this cell
				// are held in the order ABtoBC, BCtoCA and CAtoAB.
				// We add this distance to our known m_ArrivalCost to compute
				// the total cost to reach the next adjacent cell.
				m_Link[i]->query_for_path(heap, this, m_ArrivalCost+m_WallDistance[abs(i-m_ArrivalWall)]);
			}
		}
		return(true);
	}
	return(false);
}
