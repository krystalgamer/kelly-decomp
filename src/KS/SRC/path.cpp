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

#if defined(KELLY_DECOMP_FUNCTION_0034A0A8)
// 0x0034A0A8 render__15path_graph_edgeP6cameraG7color32f
class camera;
struct vector3d { float x; float y; float z; };
struct color32 { unsigned int value; };
void render_beam(const vector3d &start, const vector3d &end, color32 color, float thickness);
__asm__(".equ render_beam__FRC8vector3dT0G7color32f, 0x002C88E0");
class path_graph_node { public: vector3d point; };
class path_graph_edge { path_graph_node *nodes[2]; public: void render(camera *camera_link, color32 color, float thickness); };
void path_graph_edge::render(camera *camera_link, color32 color, float thickness) { render_beam(nodes[0]->point, nodes[1]->point, color, thickness); KELLY_DECOMP_COMPILER_BARRIER(); }
#endif
