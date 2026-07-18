class MenuEntryFunctionFloatEdit { char padding[0xC]; float* value; public: float GetValue(); };
float MenuEntryFunctionFloatEdit::GetValue() { return value ? *value : 0.0f; }
