// Matching decompilation blocks selected by generated build shims.


#if defined(KELLY_DECOMP_FUNCTION_00106608)
// 0x00106608 get_my_entity__C7ai_goal
class entity;

class ai_interface {
    char padding[0x4];
    entity* my_entity;
public:
    entity* get_my_entity() {
        return my_entity;
    }
};

class ai_goal {
    ai_interface* owner;
public:
    entity* get_my_entity() const;
};

entity* ai_goal::get_my_entity() const {
    return owner->get_my_entity();
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00106618)
// 0x00106618 going_into_service__7ai_goal
class ai_goal {
    char padding[0xC];
    bool in_service;
public:
    void going_into_service();
};

void ai_goal::going_into_service() {
    in_service = true;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00106AE8)
// 0x00106AE8 handle_chunk__7ai_goalR10chunk_fileR7stringx
class chunk_file;
class stringx;

class ai_goal {
public:
    void handle_chunk(chunk_file &file, stringx &label);
};

void ai_goal::handle_chunk(chunk_file &file, stringx &label) {
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00106C80)
// 0x00106C80 set_str__7ai_goalRC7pstringRC7stringx
class pstring;
class stringx;

class ai_goal {
public:
    bool set_str(const pstring &att, const stringx &val);
};

bool ai_goal::set_str(const pstring &att, const stringx &val) {
    return false;
}
#endif

#if defined(KELLY_DECOMP_FUNCTION_00106C88)
// 0x00106C88 get_str__7ai_goalRC7pstringR7stringx
class pstring;
class stringx;

class ai_goal {
public:
    bool get_str(const pstring &att, stringx &val);
};

bool ai_goal::get_str(const pstring &att, stringx &val) {
    return false;
}
#endif
