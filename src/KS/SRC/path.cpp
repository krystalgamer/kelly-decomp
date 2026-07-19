// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_0034A238)
// 0x0034A238 pop_way_point__4path
class path { char padding[0x18]; int waypoint; public: void pop_way_point(); };
void path::pop_way_point() { ++waypoint; }
#endif

#if defined(KELLY_DECOMP_FUNCTION_0034A080)
// 0x0034A080 is_patrol_id__C15path_graph_edgei
class path_graph_edge { char padding[8]; unsigned short flags; bool is_flagged(unsigned short flag) const { return flags & flag; } public: bool is_patrol_id(int id) const; };
bool path_graph_edge::is_patrol_id(int id) const { return is_flagged((unsigned short)(0x100 << id)); }
#endif
