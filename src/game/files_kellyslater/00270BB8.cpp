class MenuEntryIntEdit { char padding[0xC]; int* value; public: int GetValue(); };
int MenuEntryIntEdit::GetValue() { return value ? *value : 0; }
