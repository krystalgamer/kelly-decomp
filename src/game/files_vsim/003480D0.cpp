class pstring {};

class stash {
    char padding[0x18];
    pstring fullname;
public:
    const pstring& get_name() const;
};

const pstring& stash::get_name() const {
    return fullname;
}
