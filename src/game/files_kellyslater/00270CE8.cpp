class MenuEntryFloatEdit { char padding[0xC]; float* value; public: float GetValue(); };
float MenuEntryFloatEdit::GetValue() { return value ? *value : 0.0f; }
