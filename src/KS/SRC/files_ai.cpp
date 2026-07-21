// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_0010F060)
// 0x0010F060 __uninitialized_fill_n_aux__H3ZPQ211render_data11entity_infoZUiZQ211render_data11entity_info_X01X11RCX21G12__false_type_X01
inline void *operator new(unsigned int, void *place) {
    return place;
}

struct value8 {
    int first;
    int second;
};

extern "C" value8 *UninitializedFill(
    value8 *first,
    unsigned int count,
    const value8 &value
) __asm__("__uninitialized_fill_n_aux__H3ZPQ211render_data11entity_infoZUiZQ211render_data11entity_info_X01X11RCX21G12__false_type_X01");

value8 *UninitializedFill(
    value8 *first,
    unsigned int count,
    const value8 &value
) {
    while (count) {
        if (first) {
            new (first) value8(value);
        }
        --count;
        ++first;
    }
    return first;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0010FA88)
// 0x0010FA88 __uninitialized_fill_n_aux__H3ZP16ai_polypath_nodeZUiZ16ai_polypath_node_X01X11RCX21G12__false_type_X01
inline void *operator new(unsigned int, void *place) {
    return place;
}

struct value8 {
    int first;
    int second;
};

extern "C" value8 *UninitializedFill(
    value8 *first,
    unsigned int count,
    const value8 &value
) __asm__("__uninitialized_fill_n_aux__H3ZP16ai_polypath_nodeZUiZ16ai_polypath_node_X01X11RCX21G12__false_type_X01");

value8 *UninitializedFill(
    value8 *first,
    unsigned int count,
    const value8 &value
) {
    while (count) {
        if (first) {
            new (first) value8(value);
        }
        --count;
        ++first;
    }
    return first;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0010EBB8)
// 0x0010EBB8 __uninitialized_copy_aux__H2ZPQ211render_data11entity_infoZPQ211render_data11entity_info_X01X01X11G12__false_type_X11
inline void *operator new(unsigned int, void *place) {
    return place;
}

struct entity_info {
    int first;
    int second;
};

extern "C" entity_info *UninitializedCopy(
    entity_info *first,
    entity_info *last,
    entity_info *result
) __asm__("__uninitialized_copy_aux__H2ZPQ211render_data11entity_infoZPQ211render_data11entity_info_X01X01X11G12__false_type_X11");

entity_info *UninitializedCopy(
    entity_info *first,
    entity_info *last,
    entity_info *result
) {
    while (first != last) {
        if (result) {
            new (result) entity_info(*first);
        }
        ++first;
        ++result;
    }
    return result;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_0010FA20)
// 0x0010FA20 __uninitialized_copy_aux__H2ZP16ai_polypath_nodeZP16ai_polypath_node_X01X01X11G12__false_type_X11
inline void *operator new(unsigned int, void *place) {
    return place;
}

struct value8 {
    int first;
    int second;
};

extern "C" value8 *UninitializedCopy(
    value8 *first,
    value8 *last,
    value8 *result
) __asm__("__uninitialized_copy_aux__H2ZP16ai_polypath_nodeZP16ai_polypath_node_X01X01X11G12__false_type_X11");

value8 *UninitializedCopy(
    value8 *first,
    value8 *last,
    value8 *result
) {
    while (first != last) {
        if (result) {
            new (result) value8(*first);
        }
        ++first;
        ++result;
    }
    return result;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_001107F0)
// 0x001107F0 __uninitialized_copy_aux__H2ZPQ210partition37facerefZPQ210partition37faceref_X01X01X11G12__false_type_X11
inline void *operator new(unsigned int, void *place) {
    return place;
}

struct faceref {
    char bytes[4];
};

extern "C" faceref *UninitializedCopy(
    faceref *first,
    faceref *last,
    faceref *result
) __asm__("__uninitialized_copy_aux__H2ZPQ210partition37facerefZPQ210partition37faceref_X01X01X11G12__false_type_X11");

faceref *UninitializedCopy(
    faceref *first,
    faceref *last,
    faceref *result
) {
    while (first != last) {
        if (result) {
            new (result) faceref(*first);
        }
        ++first;
        ++result;
    }
    return result;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00111358)
// 0x00111358 fill__H2ZP8vector3dZ8vector3d_X01X01RCX11_v
struct vector3d {
    float x;
    float y;
    float z;

    vector3d &operator=(const vector3d &other) {
        x = other.x;
        y = other.y;
        z = other.z;
        return *this;
    }
};

extern "C" void Fill(
    vector3d *first,
    vector3d *last,
    const vector3d &value
) __asm__("fill__H2ZP8vector3dZ8vector3d_X01X01RCX11_v");

void Fill(
    vector3d *first,
    vector3d *last,
    const vector3d &value
) {
    while (first != last) {
        *first = value;
        ++first;
    }
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00111390)
// 0x00111390 __uninitialized_fill_n_aux__H3ZP8vector3dZUiZ8vector3d_X01X11RCX21G12__false_type_X01
inline void *operator new(unsigned int, void *place) {
    return place;
}

struct vector3d {
    float x;
    float y;
    float z;

    vector3d(const vector3d &other)
        : x(other.x), y(other.y), z(other.z) {}
};

extern "C" vector3d *UninitializedFill(
    vector3d *first,
    unsigned int count,
    const vector3d &value
) __asm__("__uninitialized_fill_n_aux__H3ZP8vector3dZUiZ8vector3d_X01X11RCX21G12__false_type_X01");

vector3d *UninitializedFill(
    vector3d *first,
    unsigned int count,
    const vector3d &value
) {
    while (count) {
        if (first)
            new (first) vector3d(value);
        --count;
        ++first;
    }
    return first;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00111010)
// 0x00111010 __uninitialized_copy_aux__H2ZPC8vector3dZP8vector3d_X01X01X11G12__false_type_X11
inline void *operator new(unsigned int, void *place) { return place; }
struct vector3d {
    float x, y, z;
    vector3d(const vector3d &other) : x(other.x), y(other.y), z(other.z) {}
};
extern "C" vector3d *UninitializedCopy(
    const vector3d *first, const vector3d *last, vector3d *result
) __asm__("__uninitialized_copy_aux__H2ZPC8vector3dZP8vector3d_X01X01X11G12__false_type_X11");
vector3d *UninitializedCopy(
    const vector3d *first, const vector3d *last, vector3d *result
) {
    while (first != last) {
        if (result)
            new (result) vector3d(*first);
        ++first;
        ++result;
    }
    return result;
}
#endif
